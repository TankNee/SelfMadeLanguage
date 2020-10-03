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
expression
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
term
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
    extern int yyparse(void);
    extern FILE *yyin;

    yyin = stdin;
    if(yyparse()){
        fprintf(stderr, "Error! Error! \n");
        exit(1);
    }
}