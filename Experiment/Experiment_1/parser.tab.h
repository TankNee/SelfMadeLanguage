/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     ID = 259,
     RELOP = 260,
     TYPE = 261,
     FLOAT = 262,
     CHAR = 263,
     DPLUS = 264,
     LP = 265,
     RP = 266,
     LC = 267,
     RC = 268,
     LB = 269,
     RB = 270,
     SEMI = 271,
     COMMA = 272,
     PLUS = 273,
     MINUS = 274,
     STAR = 275,
     DIV = 276,
     ASSIGNOP = 277,
     AND = 278,
     OR = 279,
     NOT = 280,
     IF = 281,
     ELSE = 282,
     WHILE = 283,
     RETURN = 284,
     FOR = 285,
     SWITCH = 286,
     CASE = 287,
     COLON = 288,
     DEFAULT = 289,
     BREAK = 290,
     CONTINUE = 291,
     EXT_DEF_LIST = 292,
     EXT_VAR_DEF = 293,
     FUNC_DEF = 294,
     ARRAY_DEF = 295,
     ARRAY_CALL = 296,
     FUNC_DEC = 297,
     EXT_DEC_LIST = 298,
     PARAM_LIST = 299,
     PARAM_DEC = 300,
     VAR_DEF = 301,
     DEC_LIST = 302,
     DEF_LIST = 303,
     COMP_STM = 304,
     STM_LIST = 305,
     EXP_STMT = 306,
     IF_THEN = 307,
     IF_THEN_ELSE = 308,
     FUNC_CALL = 309,
     ARGS = 310,
     FUNCTION = 311,
     PARAM = 312,
     ARG = 313,
     CALL = 314,
     LABEL = 315,
     GOTO = 316,
     JLT = 317,
     JLE = 318,
     JGT = 319,
     JGE = 320,
     EQ = 321,
     NEQ = 322,
     UMINUS = 323,
     LOWER_THEN_ELSE = 324
   };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define RELOP 260
#define TYPE 261
#define FLOAT 262
#define CHAR 263
#define DPLUS 264
#define LP 265
#define RP 266
#define LC 267
#define RC 268
#define LB 269
#define RB 270
#define SEMI 271
#define COMMA 272
#define PLUS 273
#define MINUS 274
#define STAR 275
#define DIV 276
#define ASSIGNOP 277
#define AND 278
#define OR 279
#define NOT 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define RETURN 284
#define FOR 285
#define SWITCH 286
#define CASE 287
#define COLON 288
#define DEFAULT 289
#define BREAK 290
#define CONTINUE 291
#define EXT_DEF_LIST 292
#define EXT_VAR_DEF 293
#define FUNC_DEF 294
#define ARRAY_DEF 295
#define ARRAY_CALL 296
#define FUNC_DEC 297
#define EXT_DEC_LIST 298
#define PARAM_LIST 299
#define PARAM_DEC 300
#define VAR_DEF 301
#define DEC_LIST 302
#define DEF_LIST 303
#define COMP_STM 304
#define STM_LIST 305
#define EXP_STMT 306
#define IF_THEN 307
#define IF_THEN_ELSE 308
#define FUNC_CALL 309
#define ARGS 310
#define FUNCTION 311
#define PARAM 312
#define ARG 313
#define CALL 314
#define LABEL 315
#define GOTO 316
#define JLT 317
#define JLE 318
#define JGT 319
#define JGE 320
#define EQ 321
#define NEQ 322
#define UMINUS 323
#define LOWER_THEN_ELSE 324




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "parser.y"
{
	int    type_int;
	float  type_float;
        char   type_char;
	char   type_id[32];
	struct ASTNode *ptr;
}
/* Line 1529 of yacc.c.  */
#line 195 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
