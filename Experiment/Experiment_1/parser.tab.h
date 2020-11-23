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
     INCREMENT = 264,
     DECREMENT = 265,
     LP = 266,
     RP = 267,
     LC = 268,
     RC = 269,
     LB = 270,
     RB = 271,
     SEMI = 272,
     COMMA = 273,
     PLUS = 274,
     MINUS = 275,
     STAR = 276,
     DIV = 277,
     ASSIGNOP = 278,
     AND = 279,
     OR = 280,
     NOT = 281,
     IF = 282,
     ELSE = 283,
     WHILE = 284,
     RETURN = 285,
     FOR = 286,
     SWITCH = 287,
     CASE = 288,
     COLON = 289,
     DEFAULT = 290,
     BREAK = 291,
     CONTINUE = 292,
     LEFT_INCREMENT = 293,
     RIGHT_INCREMENT = 294,
     LEFT_DECREMENT = 295,
     RIGHT_DECREMENT = 296,
     EXT_DEF_LIST = 297,
     EXT_VAR_DEF = 298,
     FUNC_DEF = 299,
     ARRAY_DEF = 300,
     ARRAY_CALL = 301,
     FUNC_DEC = 302,
     EXT_DEC_LIST = 303,
     PARAM_LIST = 304,
     PARAM_DEC = 305,
     VAR_DEF = 306,
     DEC_LIST = 307,
     DEF_LIST = 308,
     COMP_STM = 309,
     STM_LIST = 310,
     EXP_STMT = 311,
     IF_THEN = 312,
     IF_THEN_ELSE = 313,
     SWITCH_STMT = 314,
     SWITCH_DEFAULT_STMT = 315,
     SWITCH_STMT_LIST = 316,
     FUNC_CALL = 317,
     ARGS = 318,
     FUNCTION = 319,
     PARAM = 320,
     ARG = 321,
     CALL = 322,
     LABEL = 323,
     GOTO = 324,
     JLT = 325,
     JLE = 326,
     JGT = 327,
     JGE = 328,
     EQ = 329,
     NEQ = 330,
     UMINUS = 331,
     LOWER_THEN_ELSE = 332
   };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define RELOP 260
#define TYPE 261
#define FLOAT 262
#define CHAR 263
#define INCREMENT 264
#define DECREMENT 265
#define LP 266
#define RP 267
#define LC 268
#define RC 269
#define LB 270
#define RB 271
#define SEMI 272
#define COMMA 273
#define PLUS 274
#define MINUS 275
#define STAR 276
#define DIV 277
#define ASSIGNOP 278
#define AND 279
#define OR 280
#define NOT 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define RETURN 285
#define FOR 286
#define SWITCH 287
#define CASE 288
#define COLON 289
#define DEFAULT 290
#define BREAK 291
#define CONTINUE 292
#define LEFT_INCREMENT 293
#define RIGHT_INCREMENT 294
#define LEFT_DECREMENT 295
#define RIGHT_DECREMENT 296
#define EXT_DEF_LIST 297
#define EXT_VAR_DEF 298
#define FUNC_DEF 299
#define ARRAY_DEF 300
#define ARRAY_CALL 301
#define FUNC_DEC 302
#define EXT_DEC_LIST 303
#define PARAM_LIST 304
#define PARAM_DEC 305
#define VAR_DEF 306
#define DEC_LIST 307
#define DEF_LIST 308
#define COMP_STM 309
#define STM_LIST 310
#define EXP_STMT 311
#define IF_THEN 312
#define IF_THEN_ELSE 313
#define SWITCH_STMT 314
#define SWITCH_DEFAULT_STMT 315
#define SWITCH_STMT_LIST 316
#define FUNC_CALL 317
#define ARGS 318
#define FUNCTION 319
#define PARAM 320
#define ARG 321
#define CALL 322
#define LABEL 323
#define GOTO 324
#define JLT 325
#define JLE 326
#define JGT 327
#define JGE 328
#define EQ 329
#define NEQ 330
#define UMINUS 331
#define LOWER_THEN_ELSE 332




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
#line 211 "parser.tab.h"
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
