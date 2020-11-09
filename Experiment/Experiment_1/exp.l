%{
#include "parser.tab.h"
#include "string.h"
#include "def.h"
int yycolumn=1;
#define YY_USER_ACTION    	yylloc.first_line=yylloc.last_line=yylineno; \
	yylloc.first_column=yycolumn;	yylloc.last_column=yycolumn+yyleng-1; yycolumn+=yyleng;
typedef union {
	int type_int;
	float type_float;
	char type_id[32];
	struct node *ptr;
} YYLVAL;
#define YYSTYPE YYLVAL

%}
%option yylineno

id   [A-Za-z][A-Za-z0-9]*  
int    [0-9]+
float  ([0-9]*\.[0-9]+)|([0-9]+\.)
%start BLOCK_COMMENT LINE_COMMENT
%%
<INITIAL>{int}        	{yylval.type_int=atoi(yytext); return INT;}
<INITIAL>{float}      	{yylval.type_float=atof(yytext); return FLOAT;}
<INITIAL>"int"        	{strcpy(yylval.type_id,  yytext);return TYPE;}
<INITIAL>"float"      	{strcpy(yylval.type_id,  yytext);return TYPE;}

<INITIAL>"return"     	{return RETURN;}
<INITIAL>"if"         	{return IF;}
<INITIAL>"else"       	{return ELSE;}
<INITIAL>"while"      	{return WHILE;}

<INITIAL>{id}       	{strcpy(yylval.type_id,  yytext); return ID;}
<INITIAL>";"			{return SEMI;}
<INITIAL>","			{return COMMA;}
<INITIAL>">"|"<"|">="|"<="|"=="|"!=" {strcpy(yylval.type_id, yytext);;return RELOP;}
<INITIAL>"="			{return ASSIGNOP;}
<INITIAL>"+"			{return PLUS;}
<INITIAL>"-"			{return MINUS;}
<INITIAL>"*"			{return STAR;}
<INITIAL>"/"			{return DIV;}
<INITIAL>"&&"        	{return AND;}
<INITIAL>"||"        	{return OR;}
<INITIAL>"!"			{return NOT;}
<INITIAL>"("			{return LP;}
<INITIAL>")"			{return RP;}
<INITIAL>"{"			{return LC;}
<INITIAL>"}"			{return RC;}
<INITIAL>"/*"     		BEGIN BLOCK_COMMENT;
<INITIAL>"//"     		BEGIN LINE_COMMENT;
<BLOCK_COMMENT>\n		{yycolumn=1;}
<BLOCK_COMMENT>"*/"		{BEGIN INITIAL;}
<BLOCK_COMMENT><<EOF>> 	{printf("Error type B :Wrong Usage of Block Comment \"%s\"\n\t at Line %d\n",yytext,yylineno); return 1;}
<BLOCK_COMMENT>.      	{}
<LINE_COMMENT>\n  {
    yycolumn=1;
    BEGIN INITIAL;
}
<LINE_COMMENT><<EOF>>   BEGIN INITIAL;
<LINE_COMMENT>.   		{}
<INITIAL>[\n]        	{yycolumn=1;}   
<INITIAL>[ \r\t]     	{}   
<INITIAL>.				{printf("Error type A :Mysterious character \"%s\"\n\t at Line %d\n",yytext,yylineno);}
%%

/* 和bison联用时，不需要这部分
void main()
{
yylex();
return 0;
}

*/
int yywrap()
{
return 1;
}