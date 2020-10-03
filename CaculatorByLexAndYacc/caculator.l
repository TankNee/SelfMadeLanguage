%{
#include <stdio.h>
#include "y.tab.h"

int yywrap(void)
{
    return 1;
}
%}
%% 
"+"     return ADD;
"-"     return SUB;
"*"     return MUL;
"/"     return DIV;
"\n"    return CR;
"("     return LP;
")"     return RP;

([1-9][0-9]*)|0|([0-9]+\.[0-9]+) {
    double temp;
    sscanf(yytext, "%lf", &temp); // 使用C语言的语法来从标准输入中读取浮点数
    yylval.double_value = temp;
    return DOUBLE_LITERAL;
} 
[ \t] ;
. {
    // 因为正确的符号都在上面匹配成功了，如果落到这里来匹配说明这个符号是有问题的，直接报错就行了
    fprintf(stderr, "lexical error. \n");
    exit(1);
}
%%