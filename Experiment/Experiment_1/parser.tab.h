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
     SEMI = 269,
     COMMA = 270,
     PLUS = 271,
     MINUS = 272,
     STAR = 273,
     DIV = 274,
     ASSIGNOP = 275,
     AND = 276,
     OR = 277,
     NOT = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     RETURN = 282,
     FOR = 283,
     SWITCH = 284,
     CASE = 285,
     COLON = 286,
     DEFAULT = 287,
     EXT_DEF_LIST = 288,
     EXT_VAR_DEF = 289,
     FUNC_DEF = 290,
     FUNC_DEC = 291,
     EXT_DEC_LIST = 292,
     PARAM_LIST = 293,
     PARAM_DEC = 294,
     VAR_DEF = 295,
     DEC_LIST = 296,
     DEF_LIST = 297,
     COMP_STM = 298,
     STM_LIST = 299,
     EXP_STMT = 300,
     IF_THEN = 301,
     IF_THEN_ELSE = 302,
     FUNC_CALL = 303,
     ARGS = 304,
     FUNCTION = 305,
     PARAM = 306,
     ARG = 307,
     CALL = 308,
     LABEL = 309,
     GOTO = 310,
     JLT = 311,
     JLE = 312,
     JGT = 313,
     JGE = 314,
     EQ = 315,
     NEQ = 316,
     UMINUS = 317,
     LOWER_THEN_ELSE = 318
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
#define SEMI 269
#define COMMA 270
#define PLUS 271
#define MINUS 272
#define STAR 273
#define DIV 274
#define ASSIGNOP 275
#define AND 276
#define OR 277
#define NOT 278
#define IF 279
#define ELSE 280
#define WHILE 281
#define RETURN 282
#define FOR 283
#define SWITCH 284
#define CASE 285
#define COLON 286
#define DEFAULT 287
#define EXT_DEF_LIST 288
#define EXT_VAR_DEF 289
#define FUNC_DEF 290
#define FUNC_DEC 291
#define EXT_DEC_LIST 292
#define PARAM_LIST 293
#define PARAM_DEC 294
#define VAR_DEF 295
#define DEC_LIST 296
#define DEF_LIST 297
#define COMP_STM 298
#define STM_LIST 299
#define EXP_STMT 300
#define IF_THEN 301
#define IF_THEN_ELSE 302
#define FUNC_CALL 303
#define ARGS 304
#define FUNCTION 305
#define PARAM 306
#define ARG 307
#define CALL 308
#define LABEL 309
#define GOTO 310
#define JLT 311
#define JLE 312
#define JGT 313
#define JGE 314
#define EQ 315
#define NEQ 316
#define UMINUS 317
#define LOWER_THEN_ELSE 318




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
#line 183 "parser.tab.h"
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
