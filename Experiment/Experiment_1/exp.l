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
	char type_char;
	char type_id[32];
	struct node *ptr;
} YYLVAL;
#define YYSTYPE YYLVAL

%}
%option yylineno

id   	[A-Za-z][A-Za-z0-9]*  
int    	[0-9]+
float  	([0-9]*\.[0-9]+)|([0-9]+\.)
%start BLOCK_COMMENT LINE_COMMENT CHAR_LITERAL
%%
<INITIAL>{int}        	{printf(FONT_COLOR_BLUE"(INT,%d)\n"COLOR_NONE,atoi(yytext));yylval.type_int=atoi(yytext); return INT;}
<INITIAL>{float}      	{printf(FONT_COLOR_BLUE"(FLOAT,%f)\n"COLOR_NONE,atof(yytext));yylval.type_float=atof(yytext); return FLOAT;}

<INITIAL>"int"        	{printf(FONT_COLOR_BLUE"(INT,%s)\n"COLOR_NONE,yytext);strcpy(yylval.type_id,  yytext); return TYPE;}
<INITIAL>"float"      	{printf(FONT_COLOR_BLUE"(FLOAT,%s)\n"COLOR_NONE,yytext);strcpy(yylval.type_id,  yytext); return TYPE;}
<INITIAL>"char"      	{printf(FONT_COLOR_BLUE"(CHAR,%s)\n"COLOR_NONE,yytext);strcpy(yylval.type_id,  yytext); return TYPE;}

<INITIAL>"return"     	{printf(FONT_COLOR_BLUE"(RETURN,%s)\n"COLOR_NONE,yytext);return RETURN;}
<INITIAL>"if"         	{printf(FONT_COLOR_BLUE"(IF,%s)\n"COLOR_NONE,yytext);return IF;}
<INITIAL>"else"       	{printf(FONT_COLOR_BLUE"(ELSE,%s)\n"COLOR_NONE,yytext);return ELSE;}
<INITIAL>"while"      	{printf(FONT_COLOR_BLUE"(WHILE,%s)\n"COLOR_NONE,yytext);return WHILE;}
<INITIAL>"default"		{printf(FONT_COLOR_BLUE"(DEFAULT,%s)\n"COLOR_NONE,yytext);return DEFAULT;}
<INITIAL>"break"        {printf(FONT_COLOR_BLUE"(BREAK,%s)\n"COLOR_NONE,yytext);return BREAK;}
<INITIAL>"switch"		{printf(FONT_COLOR_BLUE"(SWITCH,%s)\n"COLOR_NONE,yytext);return SWITCH;}
<INITIAL>"case"			{printf(FONT_COLOR_BLUE"(CASE,%s)\n"COLOR_NONE,yytext);return CASE;}
<INITIAL>"for"			{printf(FONT_COLOR_BLUE"(FOR,%s)\n"COLOR_NONE,yytext);return FOR;}
<INITIAL>"continue"     {printf(FONT_COLOR_BLUE"(CONTINUE,%s)\n"COLOR_NONE,yytext);return CONTINUE;}

<INITIAL>{id}       	{printf(FONT_COLOR_BLUE"(ID,%s)\n"COLOR_NONE,yytext);strcpy(yylval.type_id,  yytext); return ID;}

<INITIAL>";"			{return SEMI;}
<INITIAL>","			{printf(FONT_COLOR_BLUE"(COMMA,%s)\n"COLOR_NONE,yytext);return COMMA;}
<INITIAL>">"|"<"|">="|"<="|"=="|"!=" {printf(FONT_COLOR_BLUE"(RELOP,%s)\n"COLOR_NONE,yytext);strcpy(yylval.type_id, yytext); return RELOP;}
<INITIAL>"="			{printf(FONT_COLOR_BLUE"(ASSIGNOP,%s)\n"COLOR_NONE,yytext);return ASSIGNOP;}
<INITIAL>"+"			{printf(FONT_COLOR_BLUE"(PLUS,%s)\n"COLOR_NONE,yytext);return PLUS;}
<INITIAL>"-"			{printf(FONT_COLOR_BLUE"(MINUS,%s)\n"COLOR_NONE,yytext);return MINUS;}
<INITIAL>"*"			{printf(FONT_COLOR_BLUE"(STAR,%s)\n"COLOR_NONE,yytext);return STAR;}
<INITIAL>"/"			{printf(FONT_COLOR_BLUE"(DIV,%s)\n"COLOR_NONE,yytext);return DIV;}
<INITIAL>":"			{printf(FONT_COLOR_BLUE"(COLON,%s)\n"COLOR_NONE,yytext);return COLON;}
<INITIAL>"&&"        	{printf(FONT_COLOR_BLUE"(AND,%s)\n"COLOR_NONE,yytext);return AND;}
<INITIAL>"||"        	{printf(FONT_COLOR_BLUE"(OR,%s)\n"COLOR_NONE,yytext);return OR;}
<INITIAL>"!"			{printf(FONT_COLOR_BLUE"(NOT,%s)\n"COLOR_NONE,yytext);return NOT;}
<INITIAL>"("			{printf(FONT_COLOR_BLUE"(LP,%s)\n"COLOR_NONE,yytext);return LP;}
<INITIAL>")"			{printf(FONT_COLOR_BLUE"(RP,%s)\n"COLOR_NONE,yytext);return RP;}
<INITIAL>"{"			{printf(FONT_COLOR_BLUE"(LC,%s)\n"COLOR_NONE,yytext);return LC;}
<INITIAL>"}"			{printf(FONT_COLOR_BLUE"(RC,%s)\n"COLOR_NONE,yytext);return RC;}
<INITIAL>"["            {printf(FONT_COLOR_BLUE"(LB,%s)\n"COLOR_NONE,yytext);return LB;}
<INITIAL>"]"            {printf(FONT_COLOR_BLUE"(RB,%s)\n"COLOR_NONE,yytext);return RB;}
<INITIAL>"++"           {printf(FONT_COLOR_BLUE"(INCREMENT,%s)\n"COLOR_NONE,yytext);return INCREMENT;}
<INITIAL>"--"           {printf(FONT_COLOR_BLUE"(DECREMENT,%s)\n"COLOR_NONE,yytext);return DECREMENT;}

<INITIAL>"/*"     		BEGIN BLOCK_COMMENT;
<INITIAL>"//"     		BEGIN LINE_COMMENT;
<BLOCK_COMMENT>\n		{yycolumn=1;}
<BLOCK_COMMENT>"*/"		{BEGIN INITIAL;}
<BLOCK_COMMENT><<EOF>> 	{printf(FONT_COLOR_RED"Error type B :Wrong Usage of Block Comment \"%s\"\t at Line %d\n"COLOR_NONE,yytext,yylineno);}
<BLOCK_COMMENT>.      	{}
<LINE_COMMENT>\n  		{
    yycolumn=1;
    BEGIN INITIAL;
}
<LINE_COMMENT><<EOF>>   BEGIN INITIAL;
<LINE_COMMENT>.   		{}

<INITIAL>\' 			{BEGIN CHAR_LITERAL;}
<CHAR_LITERAL>\'		{BEGIN INITIAL;}
<CHAR_LITERAL>.			{
	yylval.type_char=*yytext;
	return CHAR;
}
<CHAR_LITERAL>[^']?	{printf(FONT_COLOR_RED"Error type B :Wrong Usage of Single Quote \"%s\"\t at Line %d\n"COLOR_NONE,yytext,yylineno);}

<INITIAL>[\n]        	{yycolumn=1;}   
<INITIAL>[ \r\t]     	{}   
<INITIAL>.				{printf(FONT_COLOR_RED"Error type A :Mysterious character \"%s\"\t at Line %d\n"COLOR_NONE,yytext,yylineno);}
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