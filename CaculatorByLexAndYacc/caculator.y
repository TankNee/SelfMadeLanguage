%{// 一些c语言代码，会直接放入到生成的文件中
#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 1    
%}
%union {// 定义非终结符的类型
    int     int_value;
    double  double_value;
}
%token <double_value> DOUBLE_LITERAL // 记号种类的声明
%token ADD SUB MUL DIV CR LP RP // 也就是在lex文件里用正则表达式提取出来的token。
%type <double_value> expression term primary_expression // 这里的<double_value>类似于从上面联合体定义的属性中取值
%%
line_list
    : line
    | line_list line
    ;
line 
    : expression CR
    {
        printf(">>%lf\n", $1);
    }
    | error CR // error是匹配错误的特殊记号，使用这个记号加上换行符可以匹配错误。
    {
        yyclearin; // 丢弃预读取的记号
        yyerrok;   // 通知yacc程序已成功从错误的状态中恢复了 
    }
expression  // 可以抽象为单个和项或是两个表达式做和的形式
    : term
    | expression ADD term
    {
        $$ = $1 + $3;
    }
    | expression SUB term
    {
        $$ = $1 - $3;
    }
    ;
term    // 可以抽象成单个一元表达式或者是两个表达式做乘或是除法
    : primary_expression
    | term MUL primary_expression
    {
        $$ = $1 * $3;
    }
    | term DIV primary_expression
    {
        $$ = $1 / $3;
    }
    ;
primary_expression
    : DOUBLE_LITERAL
    | LP expression RP // 括号内可以是任意完整四则表达式的组合
    {
        $$ = $2;
    }
    | SUB expression
    {
        $$ = - $2;
    }
    ;
%%
int 
yyerror(char const *str)
{
    extern char *yytext;
    fprintf(stderr, "parser error near %s\n", yytext);
    return 0;
}

int main(void)
{
    // 如果在变量定义之前要使用该变量，则应在使用之前加 extern 声明变量，使作用域扩展到从声明开始到本文件结束
    extern int yyparse(void);
    extern FILE *yyin;

    yyin = stdin;
    // 如果返回的不是空，就说明出现了错误
    if(yyparse()){
        fprintf(stderr, "Error! Error! \n");
        exit(1);
    }
}