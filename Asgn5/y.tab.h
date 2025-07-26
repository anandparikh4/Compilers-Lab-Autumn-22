/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_CONSTANT = 259,            /* INT_CONSTANT  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    CHAR_CONSTANT = 261,           /* CHAR_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    ARROW = 263,                   /* ARROW  */
    INCREMENT = 264,               /* INCREMENT  */
    DECREMENT = 265,               /* DECREMENT  */
    SIZEOF = 266,                  /* SIZEOF  */
    LEFT_SHIFT = 267,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 268,             /* RIGHT_SHIFT  */
    LESS_EQUAL = 269,              /* LESS_EQUAL  */
    GREATER_EQUAL = 270,           /* GREATER_EQUAL  */
    ISEQUAL = 271,                 /* ISEQUAL  */
    NOTEQUAL = 272,                /* NOTEQUAL  */
    LOGICAL_AND = 273,             /* LOGICAL_AND  */
    LOGICAL_OR = 274,              /* LOGICAL_OR  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 277,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 278,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 279,              /* SUB_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 280,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 281,      /* RIGHT_SHIFT_ASSIGN  */
    AND_ASSIGN = 282,              /* AND_ASSIGN  */
    XOR_ASSIGN = 283,              /* XOR_ASSIGN  */
    OR_ASSIGN = 284,               /* OR_ASSIGN  */
    EXTERN = 285,                  /* EXTERN  */
    STATIC = 286,                  /* STATIC  */
    AUTO = 287,                    /* AUTO  */
    REGISTER = 288,                /* REGISTER  */
    VOID = 289,                    /* VOID  */
    CHAR = 290,                    /* CHAR  */
    SHORT = 291,                   /* SHORT  */
    INT = 292,                     /* INT  */
    LONG = 293,                    /* LONG  */
    FLOAT = 294,                   /* FLOAT  */
    DOUBLE = 295,                  /* DOUBLE  */
    SIGNED = 296,                  /* SIGNED  */
    UNSIGNED = 297,                /* UNSIGNED  */
    BOOL = 298,                    /* BOOL  */
    COMPLEX = 299,                 /* COMPLEX  */
    IMAGINARY = 300,               /* IMAGINARY  */
    CONST = 301,                   /* CONST  */
    RESTRICT = 302,                /* RESTRICT  */
    VOLATILE = 303,                /* VOLATILE  */
    INLINE = 304,                  /* INLINE  */
    ELLIPSIS = 305,                /* ELLIPSIS  */
    ENUM = 306,                    /* ENUM  */
    CASE = 307,                    /* CASE  */
    DEFAULT = 308,                 /* DEFAULT  */
    IF = 309,                      /* IF  */
    ELSE = 310,                    /* ELSE  */
    SWITCH = 311,                  /* SWITCH  */
    FOR = 312,                     /* FOR  */
    DO = 313,                      /* DO  */
    WHILE = 314,                   /* WHILE  */
    GOTO = 315,                    /* GOTO  */
    CONTINUE = 316,                /* CONTINUE  */
    BREAK = 317,                   /* BREAK  */
    RETURN = 318,                  /* RETURN  */
    LEFT_PARENTHESES = 319,        /* LEFT_PARENTHESES  */
    RIGHT_PARENTHESES = 320,       /* RIGHT_PARENTHESES  */
    DOT = 321,                     /* DOT  */
    COMMA = 322,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 323,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 324,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACE = 325,        /* LEFT_CURLY_BRACE  */
    RIGHT_CURLY_BRACE = 326,       /* RIGHT_CURLY_BRACE  */
    LESS_THAN = 327,               /* LESS_THAN  */
    GREATER_THAN = 328,            /* GREATER_THAN  */
    EQUAL_TO = 329,                /* EQUAL_TO  */
    BITWISE_AND = 330,             /* BITWISE_AND  */
    BITWISE_OR = 331,              /* BITWISE_OR  */
    BITWISE_XOR = 332,             /* BITWISE_XOR  */
    ASTERISK = 333,                /* ASTERISK  */
    FORWARD_SLASH = 334,           /* FORWARD_SLASH  */
    PLUS = 335,                    /* PLUS  */
    MINUS = 336,                   /* MINUS  */
    MODULO = 337,                  /* MODULO  */
    TILDE = 338,                   /* TILDE  */
    EXCLAMATORY_MARK = 339,        /* EXCLAMATORY_MARK  */
    QUESTION_MARK = 340,           /* QUESTION_MARK  */
    COLON = 341,                   /* COLON  */
    SEMICOLON = 342,               /* SEMICOLON  */
    THEN = 343                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define INT_CONSTANT 259
#define FLOAT_CONSTANT 260
#define CHAR_CONSTANT 261
#define STRING_LITERAL 262
#define ARROW 263
#define INCREMENT 264
#define DECREMENT 265
#define SIZEOF 266
#define LEFT_SHIFT 267
#define RIGHT_SHIFT 268
#define LESS_EQUAL 269
#define GREATER_EQUAL 270
#define ISEQUAL 271
#define NOTEQUAL 272
#define LOGICAL_AND 273
#define LOGICAL_OR 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_SHIFT_ASSIGN 280
#define RIGHT_SHIFT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define VOID 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define FLOAT 294
#define DOUBLE 295
#define SIGNED 296
#define UNSIGNED 297
#define BOOL 298
#define COMPLEX 299
#define IMAGINARY 300
#define CONST 301
#define RESTRICT 302
#define VOLATILE 303
#define INLINE 304
#define ELLIPSIS 305
#define ENUM 306
#define CASE 307
#define DEFAULT 308
#define IF 309
#define ELSE 310
#define SWITCH 311
#define FOR 312
#define DO 313
#define WHILE 314
#define GOTO 315
#define CONTINUE 316
#define BREAK 317
#define RETURN 318
#define LEFT_PARENTHESES 319
#define RIGHT_PARENTHESES 320
#define DOT 321
#define COMMA 322
#define LEFT_SQUARE_BRACKET 323
#define RIGHT_SQUARE_BRACKET 324
#define LEFT_CURLY_BRACE 325
#define RIGHT_CURLY_BRACE 326
#define LESS_THAN 327
#define GREATER_THAN 328
#define EQUAL_TO 329
#define BITWISE_AND 330
#define BITWISE_OR 331
#define BITWISE_XOR 332
#define ASTERISK 333
#define FORWARD_SLASH 334
#define PLUS 335
#define MINUS 336
#define MODULO 337
#define TILDE 338
#define EXCLAMATORY_MARK 339
#define QUESTION_MARK 340
#define COLON 341
#define SEMICOLON 342
#define THEN 343

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "bison.y"

	int intval;
	char* charval;
	char* strval;
	sym* idval;
	char* floatval;

	char * __unaryOperator;
	int __instructionNumber;
	int __parameterCount;
	expression *__expression;
	statement *__statement;
	Array * __array;
	sym_type * __symbolType;
	sym * __symbol;

#line 260 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
