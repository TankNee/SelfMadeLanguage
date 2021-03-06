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
     DPLUS = 263,
     LP = 264,
     RP = 265,
     LC = 266,
     RC = 267,
     SEMI = 268,
     COMMA = 269,
     PLUS = 270,
     MINUS = 271,
     STAR = 272,
     DIV = 273,
     ASSIGNOP = 274,
     AND = 275,
     OR = 276,
     NOT = 277,
     IF = 278,
     ELSE = 279,
     WHILE = 280,
     RETURN = 281,
     FOR = 282,
     SWITCH = 283,
     CASE = 284,
     COLON = 285,
     DEFAULT = 286,
     EXT_DEF_LIST = 287,
     EXT_VAR_DEF = 288,
     FUNC_DEF = 289,
     FUNC_DEC = 290,
     EXT_DEC_LIST = 291,
     PARAM_LIST = 292,
     PARAM_DEC = 293,
     VAR_DEF = 294,
     DEC_LIST = 295,
     DEF_LIST = 296,
     COMP_STM = 297,
     STM_LIST = 298,
     EXP_STMT = 299,
     IF_THEN = 300,
     IF_THEN_ELSE = 301,
     FUNC_CALL = 302,
     ARGS = 303,
     FUNCTION = 304,
     PARAM = 305,
     ARG = 306,
     CALL = 307,
     LABEL = 308,
     GOTO = 309,
     JLT = 310,
     JLE = 311,
     JGT = 312,
     JGE = 313,
     EQ = 314,
     NEQ = 315,
     UMINUS = 316,
     LOWER_THEN_ELSE = 317
   };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define RELOP 260
#define TYPE 261
#define FLOAT 262
#define DPLUS 263
#define LP 264
#define RP 265
#define LC 266
#define RC 267
#define SEMI 268
#define COMMA 269
#define PLUS 270
#define MINUS 271
#define STAR 272
#define DIV 273
#define ASSIGNOP 274
#define AND 275
#define OR 276
#define NOT 277
#define IF 278
#define ELSE 279
#define WHILE 280
#define RETURN 281
#define FOR 282
#define SWITCH 283
#define CASE 284
#define COLON 285
#define DEFAULT 286
#define EXT_DEF_LIST 287
#define EXT_VAR_DEF 288
#define FUNC_DEF 289
#define FUNC_DEC 290
#define EXT_DEC_LIST 291
#define PARAM_LIST 292
#define PARAM_DEC 293
#define VAR_DEF 294
#define DEC_LIST 295
#define DEF_LIST 296
#define COMP_STM 297
#define STM_LIST 298
#define EXP_STMT 299
#define IF_THEN 300
#define IF_THEN_ELSE 301
#define FUNC_CALL 302
#define ARGS 303
#define FUNCTION 304
#define PARAM 305
#define ARG 306
#define CALL 307
#define LABEL 308
#define GOTO 309
#define JLT 310
#define JLE 311
#define JGT 312
#define JGE 313
#define EQ 314
#define NEQ 315
#define UMINUS 316
#define LOWER_THEN_ELSE 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "parser.y"
{
	int    type_int;
	float  type_float;
	char   type_id[32];
	struct ASTNode *ptr;
}
/* Line 1529 of yacc.c.  */
#line 180 "y.tab.h"
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
