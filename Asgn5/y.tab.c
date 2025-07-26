/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

	#include "translator.h"
	
	extern int yylex();
	extern int lc;
  // void yyerror(char * s); //check
	// void myprintf(char * s);
	void yyerror(string s); //check
	void myprintf(string s);

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 328 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_CONSTANT = 4,               /* INT_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 6,              /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_ARROW = 8,                      /* ARROW  */
  YYSYMBOL_INCREMENT = 9,                  /* INCREMENT  */
  YYSYMBOL_DECREMENT = 10,                 /* DECREMENT  */
  YYSYMBOL_SIZEOF = 11,                    /* SIZEOF  */
  YYSYMBOL_LEFT_SHIFT = 12,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 13,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_EQUAL = 14,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 15,             /* GREATER_EQUAL  */
  YYSYMBOL_ISEQUAL = 16,                   /* ISEQUAL  */
  YYSYMBOL_NOTEQUAL = 17,                  /* NOTEQUAL  */
  YYSYMBOL_LOGICAL_AND = 18,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 19,                /* LOGICAL_OR  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 25,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 26,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 41,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 42,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 43,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 44,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 45,                 /* IMAGINARY  */
  YYSYMBOL_CONST = 46,                     /* CONST  */
  YYSYMBOL_RESTRICT = 47,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 48,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 49,                    /* INLINE  */
  YYSYMBOL_ELLIPSIS = 50,                  /* ELLIPSIS  */
  YYSYMBOL_ENUM = 51,                      /* ENUM  */
  YYSYMBOL_CASE = 52,                      /* CASE  */
  YYSYMBOL_DEFAULT = 53,                   /* DEFAULT  */
  YYSYMBOL_IF = 54,                        /* IF  */
  YYSYMBOL_ELSE = 55,                      /* ELSE  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_DO = 58,                        /* DO  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 61,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 62,                     /* BREAK  */
  YYSYMBOL_RETURN = 63,                    /* RETURN  */
  YYSYMBOL_LEFT_PARENTHESES = 64,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 65,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_DOT = 66,                       /* DOT  */
  YYSYMBOL_COMMA = 67,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 68,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 69,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACE = 70,          /* LEFT_CURLY_BRACE  */
  YYSYMBOL_RIGHT_CURLY_BRACE = 71,         /* RIGHT_CURLY_BRACE  */
  YYSYMBOL_LESS_THAN = 72,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 73,              /* GREATER_THAN  */
  YYSYMBOL_EQUAL_TO = 74,                  /* EQUAL_TO  */
  YYSYMBOL_BITWISE_AND = 75,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_OR = 76,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_XOR = 77,               /* BITWISE_XOR  */
  YYSYMBOL_ASTERISK = 78,                  /* ASTERISK  */
  YYSYMBOL_FORWARD_SLASH = 79,             /* FORWARD_SLASH  */
  YYSYMBOL_PLUS = 80,                      /* PLUS  */
  YYSYMBOL_MINUS = 81,                     /* MINUS  */
  YYSYMBOL_MODULO = 82,                    /* MODULO  */
  YYSYMBOL_TILDE = 83,                     /* TILDE  */
  YYSYMBOL_EXCLAMATORY_MARK = 84,          /* EXCLAMATORY_MARK  */
  YYSYMBOL_QUESTION_MARK = 85,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 86,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 87,                 /* SEMICOLON  */
  YYSYMBOL_THEN = 88,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_primary_expression = 90,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 92, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_AND_expression = 102,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 103,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 104,  /* inclusive_OR_expression  */
  YYSYMBOL_M = 105,                        /* M  */
  YYSYMBOL_N = 106,                        /* N  */
  YYSYMBOL_logical_AND_expression = 107,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 108,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 111,      /* assignment_operator  */
  YYSYMBOL_expression = 112,               /* expression  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_declaration = 114,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 115, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 116,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 117, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 118,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 119,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 120,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 121,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 123, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 124,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 125,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 126,          /* enumerator_list  */
  YYSYMBOL_enumerator = 127,               /* enumerator  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 129,       /* function_specifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_change_scope = 131,             /* change_scope  */
  YYSYMBOL_direct_declarator = 132,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 133,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 134,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 135,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 136,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 137,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 138,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 139,          /* identifier_list  */
  YYSYMBOL_typename = 140,                 /* typename  */
  YYSYMBOL_initializer = 141,              /* initializer  */
  YYSYMBOL_initializer_list = 142,         /* initializer_list  */
  YYSYMBOL_designation_opt = 143,          /* designation_opt  */
  YYSYMBOL_designation = 144,              /* designation  */
  YYSYMBOL_designator_list = 145,          /* designator_list  */
  YYSYMBOL_designator = 146,               /* designator  */
  YYSYMBOL_statement = 147,                /* statement  */
  YYSYMBOL_labeled_statement = 148,        /* labeled_statement  */
  YYSYMBOL_change_block = 149,             /* change_block  */
  YYSYMBOL_compound_statement = 150,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 151,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 152,          /* block_item_list  */
  YYSYMBOL_block_item = 153,               /* block_item  */
  YYSYMBOL_expression_statement = 154,     /* expression_statement  */
  YYSYMBOL_expression_opt = 155,           /* expression_opt  */
  YYSYMBOL_selection_statement = 156,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 157,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 158,           /* jump_statement  */
  YYSYMBOL_translation_unit = 159,         /* translation_unit  */
  YYSYMBOL_external_declaration = 160,     /* external_declaration  */
  YYSYMBOL_function_definition = 161,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 162,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 163          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   961

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  368

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   184,   184,   191,   198,   205,   212,   219,   227,   235,
     253,   260,   262,   264,   272,   280,   282,   287,   293,   300,
     306,   315,   320,   326,   332,   359,   361,   366,   368,   370,
     372,   374,   376,   381,   386,   394,   410,   433,   456,   484,
     488,   499,   513,   517,   527,   541,   545,   559,   573,   587,
     604,   608,   623,   642,   646,   659,   663,   676,   680,   693,
     700,   709,   714,   728,   733,   747,   752,   772,   777,   798,
     800,   802,   804,   806,   808,   810,   812,   814,   816,   818,
     823,   828,   833,   842,   847,   850,   854,   856,   858,   860,
     865,   868,   872,   874,   879,   884,   893,   895,   897,   899,
     904,   906,   908,   910,   912,   914,   916,   918,   920,   922,
     924,   926,   928,   933,   935,   940,   943,   947,   949,   951,
     956,   959,   963,   965,   970,   972,   977,   979,   981,   986,
     991,  1000,  1007,  1029,  1035,  1040,  1044,  1048,  1066,  1085,
    1089,  1093,  1097,  1101,  1105,  1120,  1124,  1142,  1145,  1165,
    1170,  1178,  1180,  1185,  1187,  1192,  1194,  1199,  1201,  1206,
    1208,  1213,  1218,  1223,  1225,  1230,  1232,  1237,  1240,  1244,
    1249,  1251,  1256,  1258,  1265,  1267,  1272,  1278,  1283,  1288,
    1296,  1298,  1300,  1305,  1316,  1324,  1329,  1335,  1339,  1348,
    1352,  1359,  1366,  1371,  1377,  1385,  1394,  1399,  1409,  1418,
    1429,  1434,  1436,  1438,  1440,  1455,  1457,  1462,  1464,  1469,
    1479,  1482,  1486,  1488
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "STRING_LITERAL",
  "ARROW", "INCREMENT", "DECREMENT", "SIZEOF", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_EQUAL", "GREATER_EQUAL", "ISEQUAL", "NOTEQUAL", "LOGICAL_AND",
  "LOGICAL_OR", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "VOID", "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "SIGNED",
  "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "CONST", "RESTRICT",
  "VOLATILE", "INLINE", "ELLIPSIS", "ENUM", "CASE", "DEFAULT", "IF",
  "ELSE", "SWITCH", "FOR", "DO", "WHILE", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "DOT", "COMMA",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "LESS_THAN", "GREATER_THAN", "EQUAL_TO",
  "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR", "ASTERISK", "FORWARD_SLASH",
  "PLUS", "MINUS", "MODULO", "TILDE", "EXCLAMATORY_MARK", "QUESTION_MARK",
  "COLON", "SEMICOLON", "THEN", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "M", "N", "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "change_scope", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "typename", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "change_block", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-292)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-212)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     910,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,    35,  -292,    45,   910,   910,  -292,   910,   910,   785,
    -292,  -292,   -13,     1,  -292,    45,   109,   -37,    52,  -292,
     807,     4,    17,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
     110,    72,  -292,    24,   109,  -292,    45,   638,  -292,    45,
    -292,   910,   126,   536,     4,    70,     6,  -292,  -292,  -292,
    -292,  -292,    76,  -292,  -292,  -292,  -292,  -292,   684,   684,
     720,   447,   -38,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
      37,   441,   730,  -292,   -56,    -6,   173,   124,   185,    83,
      97,    87,   164,    -9,  -292,  -292,  -292,   129,  -292,  -292,
     852,    86,   592,  -292,   125,   137,   582,   730,    11,  -292,
     447,  -292,  -292,   447,  -292,  -292,    99,   217,  -292,   217,
     149,   212,   730,    44,   638,  -292,   -41,  -292,   215,  -292,
    -292,   730,   218,   730,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,   730,  -292,  -292,   730,   730,
     730,   730,   730,   730,   730,   730,   730,   730,   730,   730,
     730,   730,   730,   730,  -292,  -292,   135,   272,  -292,    45,
     157,   156,  -292,  -292,   221,   158,   592,  -292,  -292,   730,
    -292,   159,   160,  -292,  -292,  -292,  -292,   161,   166,  -292,
     730,  -292,  -292,  -292,   674,  -292,   163,   -29,  -292,  -292,
    -292,  -292,  -292,   169,   168,  -292,  -292,   100,  -292,  -292,
    -292,  -292,   -56,   -56,    -6,    -6,   173,   173,   173,   173,
     124,   124,   185,    83,    97,   730,   730,  -292,   139,   730,
     151,   175,   177,   179,  -292,  -292,   241,   162,   180,   730,
    -292,   178,  -292,  -292,  -292,  -292,   176,   195,  -292,  -292,
     184,  -292,  -292,  -292,  -292,  -292,   888,  -292,  -292,   211,
     216,  -292,  -292,   214,   214,  -292,   -38,  -292,  -292,  -292,
     638,  -292,   730,  -292,    87,   164,   730,   496,   200,   496,
     730,   730,   396,   496,   182,   201,  -292,  -292,   202,  -292,
    -292,   334,  -292,  -292,  -292,  -292,  -292,    65,  -292,  -292,
     178,  -292,   496,  -292,   103,   106,   730,   203,  -292,   730,
    -292,  -292,   272,  -292,   -15,  -292,   205,  -292,  -292,   496,
     206,  -292,   189,   112,   223,  -292,  -292,   496,  -292,   730,
     730,   231,  -292,  -292,   730,  -292,   222,   209,   730,   496,
    -292,   242,   496,  -292,   123,  -292,  -292,  -292,   730,   213,
     496,  -292,  -292,  -292,   233,  -292,   496,  -292
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   126,   127,   128,
     129,   121,   208,    85,    91,    91,   112,    91,    91,     0,
     205,   207,   119,     0,   133,     0,   148,     0,    84,    92,
      94,   131,     0,    90,    86,    87,    88,    89,     1,   206,
       0,     0,   151,   149,   147,    83,     0,     0,   212,    85,
     132,   210,   132,     0,   130,   124,     0,   122,   134,   150,
     152,    93,    94,     2,     3,     4,     5,     6,     0,     0,
       0,     0,   168,    27,    28,    29,    30,    31,    32,     8,
      21,    33,     0,    35,    39,    42,    45,    50,    53,    55,
      57,    61,    63,    65,    67,   162,    95,     0,   213,   159,
       0,     0,     0,   138,    28,     0,     0,     0,     0,   117,
       0,    22,    23,     0,    25,    80,     0,   116,   161,   116,
       0,     0,     0,     0,     0,   167,     0,   170,     0,    13,
      14,    18,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    69,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    59,     0,   186,   146,   158,
       0,   153,   155,   145,     0,     0,     0,   143,   137,     0,
     136,    28,     0,    82,   125,   118,   123,     0,     0,     7,
       0,   115,   113,   114,     0,   173,     0,   168,   163,   165,
     169,   171,    12,     0,    17,    19,    11,     0,    68,    36,
      37,    38,    40,    41,    43,    44,    48,    49,    46,    47,
      51,    52,    54,    56,    58,     0,     0,    59,     2,     0,
       0,     0,     0,     0,    59,    59,     0,     0,     0,   193,
     183,   192,   189,   190,   174,   175,     0,    59,   187,   176,
       0,   177,   178,   179,   157,   144,     0,   160,   140,     0,
       0,   142,   135,     0,    26,    81,   168,    34,   172,   164,
       0,    10,     0,     9,    62,    64,     0,   193,     0,   193,
       0,     0,   193,   193,     0,     0,   202,   203,     0,   132,
     209,   193,   191,   154,   156,   139,   141,     0,   166,    20,
      60,   180,   193,   182,     0,     0,   193,     0,    59,     0,
     201,   204,   186,   188,   168,    15,     0,   181,    59,   193,
       0,    59,     0,     0,     0,    16,    59,   193,   196,   193,
     193,     0,    59,   184,     0,    60,     0,     0,     0,   193,
      66,   194,   193,    59,     0,   197,    59,   200,   193,     0,
     193,    60,   198,   195,     0,    59,   193,   199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -292,  -292,  -292,   -74,  -292,   -80,    42,    46,
     -25,    47,   128,   150,   154,    66,  -123,  -291,   113,  -292,
    -108,    -8,  -292,   -79,  -119,     0,  -292,     7,   121,  -292,
     290,  -292,   -60,    71,   219,  -292,  -292,  -292,   236,    64,
    -292,   -20,   -61,   309,  -292,   304,   -46,  -292,  -292,    92,
    -292,   -58,  -126,    84,  -196,  -292,  -292,   225,  -177,  -292,
    -292,  -292,    40,  -292,    62,  -292,  -233,  -292,  -292,  -292,
    -292,   355,  -292,  -292,  -292
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    89,    90,   213,   214,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   235,   176,   102,   103,
     104,   125,   155,   251,   194,   252,    37,    59,    44,    38,
      39,    24,    25,   128,   202,    26,    33,    66,    67,    27,
      28,    72,   107,    41,    53,    42,    54,   180,   181,   182,
     111,   130,   106,   133,   134,   135,   136,   137,   253,   254,
     299,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      29,    30,    31,    60,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   110,   126,    40,   121,   122,   124,    23,   209,   193,
     175,   280,   157,   206,    65,    51,   298,   116,   156,   326,
      34,   127,   158,   159,   193,   131,   160,   132,   131,    22,
     132,    43,    43,   210,    43,    43,    23,   131,    32,   132,
      58,   126,   279,   156,   126,   138,   139,   140,    34,   105,
      55,   131,   236,   132,   351,   115,   335,  -120,   156,   317,
     127,   108,   197,   127,   217,   198,   186,   127,    62,   127,
     364,    50,    63,   118,   161,   162,   -60,   119,   219,   220,
     221,    35,   195,   330,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
      52,   141,    36,   142,   185,   143,   346,   347,   192,    35,
     311,   207,   313,    65,   286,   208,   318,   179,    70,    56,
     288,   293,   294,    36,   277,   361,   105,    52,   280,   109,
     156,   193,   324,   215,   301,   327,   325,    68,   165,   166,
     226,   227,   228,   229,   117,   129,    45,   218,    46,    47,
      57,   183,   338,   184,   308,    17,    18,    19,   171,   264,
     345,   156,   156,   173,   199,   156,   200,   200,   328,   283,
     200,   329,   355,   200,   172,   357,    52,   342,   269,   200,
      70,   270,   174,   363,   129,   163,   164,   129,   359,   367,
     200,   129,   275,   129,   187,   332,   167,   168,   201,   177,
     201,   169,   170,   222,   223,   337,   188,   310,   340,   224,
     225,   314,   315,   344,   204,   205,   230,   231,   212,   349,
     237,   216,   265,   266,   267,   287,   273,   268,   271,   272,
     358,   274,   278,   360,   281,   282,   350,   289,   322,   290,
     333,   291,   366,   292,   295,   200,   319,   300,   341,   296,
      70,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,  -185,   297,    21,   354,
     156,   302,   105,   179,   309,   238,    74,    75,    76,    77,
     305,    78,    79,    80,   276,   306,   312,   352,   320,   321,
     331,   336,   316,   339,   343,   348,   353,   356,   365,   232,
     362,   284,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   233,    21,   239,   240,   241,   234,   242,   243,
     244,   245,   246,   247,   248,   249,    81,   238,    74,    75,
      76,    77,   250,    78,    79,    80,    71,    83,   203,   285,
      84,    64,    85,    86,   196,    87,    88,    69,   304,  -193,
     307,   211,   334,   323,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    49,    21,   239,   240,   241,     0,
     242,   243,   244,   245,   246,   247,   248,   249,    81,    73,
      74,    75,    76,    77,   250,    78,    79,    80,     0,    83,
       0,     0,    84,     0,    85,    86,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,    21,     0,     0,
      73,    74,    75,    76,    77,     0,    78,    79,    80,     0,
      81,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    83,     0,     0,    84,     0,    85,    86,     0,    87,
      88,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    21,   238,
      74,    75,    76,    77,     0,    78,    79,    80,     0,     0,
       0,    81,     0,     0,     0,   154,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,     0,    85,    86,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,     0,    78,    79,    80,   239,   240,
     241,     0,   242,   243,   244,   245,   246,   247,   248,   249,
      81,     0,     0,     0,     0,     0,   250,   112,     0,     0,
       0,    83,     0,     0,    84,     0,    85,    86,     0,    87,
      88,     0,    17,    18,    19,    73,    74,    75,    76,    77,
       0,    78,    79,    80,     0,    73,    74,    75,    76,    77,
      81,    78,    79,    80,     0,   113,     0,     0,     0,     0,
       0,    83,     0,   189,   114,     0,    85,    86,     0,    87,
      88,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    73,    74,    75,    76,    77,    81,    78,    79,    80,
       0,   190,     0,     0,     0,     0,    81,    83,     0,     0,
     191,     0,    85,    86,     0,    87,    88,    83,     0,     0,
      84,     0,    85,    86,     0,    87,    88,    73,    74,    75,
      76,    77,     0,    78,    79,    80,     0,    73,    74,    75,
      76,    77,     0,    78,    79,    80,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,     0,     0,    84,     0,    85,    86,
       0,    87,    88,    73,    74,    75,    76,    77,     0,    78,
      79,    80,     0,    73,    74,    75,    76,    77,    81,    78,
      79,    80,     0,     0,   276,     0,     0,     0,   120,    83,
       0,     0,    84,     0,    85,    86,     0,    87,    88,    83,
       0,     0,    84,     0,    85,    86,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    83,     0,     0,    84,     0,
      85,    86,     0,    87,    88,    83,     0,     0,    84,     0,
      85,    86,     0,    87,    88,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,    21,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -211,     0,     0,
       0,    57,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   303,    21,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    62,    81,    23,    78,    79,    80,     0,   134,   117,
      19,   207,    92,   132,     3,    35,   249,    63,    92,   310,
       3,    81,    78,    79,   132,    66,    82,    68,    66,    29,
      68,    24,    25,    74,    27,    28,    29,    66,     3,    68,
      40,   120,    71,   117,   123,     8,     9,    10,     3,    57,
      87,    66,   175,    68,   345,    63,    71,    70,   132,   292,
     120,    61,   120,   123,   143,   123,   112,   127,    64,   129,
     361,    70,    68,    67,    80,    81,    85,    71,   158,   159,
     160,    64,    71,   316,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
      36,    64,    78,    66,   112,    68,   339,   340,   116,    64,
     287,    67,   289,     3,   237,    71,   293,   110,    54,    67,
     239,   244,   245,    78,   204,   358,   134,    63,   324,     3,
     204,   239,    67,   141,   257,   312,    71,    65,    14,    15,
     165,   166,   167,   168,    74,    81,    25,   155,    27,    28,
      74,    65,   329,    67,   280,    46,    47,    48,    75,   179,
     337,   235,   236,    76,    65,   239,    67,    67,    65,    69,
      67,    65,   349,    67,    77,   352,   112,    65,   186,    67,
     116,   189,    18,   360,   120,    12,    13,   123,    65,   366,
      67,   127,   200,   129,    69,   318,    72,    73,   127,    70,
     129,    16,    17,   161,   162,   328,    69,   286,   331,   163,
     164,   290,   291,   336,    65,     3,   169,   170,     3,   342,
      85,     3,    65,    67,     3,    86,    65,    69,    69,    69,
     353,    65,    69,   356,    65,    67,   344,    86,   299,    64,
     319,    64,   365,    64,     3,    67,    64,    71,    59,    87,
     186,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    71,    87,    51,   348,
     344,    87,   280,   266,   282,     3,     4,     5,     6,     7,
      69,     9,    10,    11,    70,    69,    86,    65,    87,    87,
      87,    86,   292,    87,    71,    64,    87,    55,    65,   171,
      87,   235,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   172,    51,    52,    53,    54,   173,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,     5,
       6,     7,    70,     9,    10,    11,    56,    75,   129,   236,
      78,    42,    80,    81,   118,    83,    84,    53,   266,    87,
     276,   136,   322,   301,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    29,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,     5,     6,     7,    70,     9,    10,    11,    -1,    75,
      -1,    -1,    78,    -1,    80,    81,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      64,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    75,    -1,    -1,    78,    -1,    80,    81,    -1,    83,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    81,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    31,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    80,    81,    -1,    83,
      84,    -1,    46,    47,    48,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,     3,     4,     5,     6,     7,
      64,     9,    10,    11,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    31,    78,    -1,    80,    81,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,     3,     4,     5,     6,     7,    64,     9,    10,    11,
      -1,    69,    -1,    -1,    -1,    -1,    64,    75,    -1,    -1,
      78,    -1,    80,    81,    -1,    83,    84,    75,    -1,    -1,
      78,    -1,    80,    81,    -1,    83,    84,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    80,    81,
      -1,    83,    84,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,     3,     4,     5,     6,     7,    64,     9,
      10,    11,    -1,    -1,    70,    -1,    -1,    -1,    64,    75,
      -1,    -1,    78,    -1,    80,    81,    -1,    83,    84,    75,
      -1,    -1,    78,    -1,    80,    81,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    75,    -1,    -1,    78,    -1,
      80,    81,    -1,    83,    84,    75,    -1,    -1,    78,    -1,
      80,    81,    -1,    83,    84,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    74,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    51,   114,   116,   120,   121,   124,   128,   129,   159,
     160,   161,     3,   125,     3,    64,    78,   115,   118,   119,
     130,   132,   134,   116,   117,   117,   117,   117,     0,   160,
      70,   130,   128,   133,   135,    87,    67,    74,   114,   116,
     162,   163,    64,    68,   132,     3,   126,   127,    65,   134,
     128,   119,   130,     3,     4,     5,     6,     7,     9,    10,
      11,    64,    70,    75,    78,    80,    81,    83,    84,    90,
      91,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   107,   108,   109,   110,   141,   131,   114,     3,
     131,   139,    31,    69,    78,   110,   135,    74,    67,    71,
      64,    94,    94,    64,    94,   110,   112,   121,   122,   128,
     140,    66,    68,   142,   143,   144,   145,   146,     8,     9,
      10,    64,    66,    68,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    74,   111,    94,    96,    78,    79,
      82,    80,    81,    12,    13,    14,    15,    72,    73,    16,
      17,    75,    77,    76,    18,    19,   106,    70,    65,   116,
     136,   137,   138,    65,    67,   110,   135,    69,    69,    31,
      69,    78,   110,   109,   113,    71,   127,   140,   140,    65,
      67,   122,   123,   123,    65,     3,   113,    67,    71,   141,
      74,   146,     3,    92,    93,   110,     3,   112,   110,    96,
      96,    96,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   101,   102,   103,   105,   105,    85,     3,    52,
      53,    54,    56,    57,    58,    59,    60,    61,    62,    63,
      70,   112,   114,   147,   148,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   130,    65,    67,     3,    69,   110,
     110,    69,    69,    65,    65,   110,    70,    96,    69,    71,
     143,    65,    67,    69,   104,   107,   105,    86,   113,    86,
      64,    64,    64,   105,   105,     3,    87,    87,   155,   149,
      71,   105,    87,    50,   138,    69,    69,   142,   141,   110,
     112,   147,    86,   147,   112,   112,   114,   155,   147,    64,
      87,    87,   131,   153,    67,    71,   106,   147,    65,    65,
     155,    87,   105,   112,   151,    71,    86,   105,   147,    87,
     105,    59,    65,    71,   105,   147,   155,   155,    64,   105,
     109,   106,    65,    87,   112,   147,    55,   147,   105,    65,
     105,   155,    87,   147,   106,    65,   105,   147
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     130,   130,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   146,   147,   147,   147,   147,   147,   147,
     148,   148,   148,   149,   150,   151,   151,   152,   152,   153,
     153,   154,   155,   155,   156,   156,   156,   157,   157,   157,
     157,   158,   158,   158,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   163
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     4,     4,     3,     6,
       5,     6,     5,     4,     5,     4,     4,     1,     0,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     1,     0,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     0,     5,     1,     0,     1,     3,     1,
       1,     2,     1,     0,     7,    10,     5,     7,     9,    13,
       8,     3,     2,     2,     3,     1,     2,     1,     1,     7,
       1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 185 "bison.y"
                                {
					myprintf("primary_expression => IDENTIFIER\t");
                    (yyval.__expression) = new expression(); // create new non boolean expression and symbol is the identifier
                    (yyval.__expression)->loc = (yyvsp[0].idval);
                    (yyval.__expression)->type = "nonboolean"; 
				}
#line 1886 "y.tab.c"
    break;

  case 3: /* primary_expression: INT_CONSTANT  */
#line 192 "bison.y"
                                {
					myprintf("primary_expression => INT_CONSTANT\t");
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->loc = gentemp("int", to_string((yyvsp[0].intval)));
                    emit("=", (yyval.__expression)->loc->name, (yyvsp[0].intval));
				}
#line 1897 "y.tab.c"
    break;

  case 4: /* primary_expression: FLOAT_CONSTANT  */
#line 199 "bison.y"
                                {
					myprintf("primary_expression => FLOAT_CONSTANT\t");
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->loc = gentemp("float", (yyvsp[0].floatval));
                    emit("=", (yyval.__expression)->loc->name, (yyvsp[0].floatval));
				}
#line 1908 "y.tab.c"
    break;

  case 5: /* primary_expression: CHAR_CONSTANT  */
#line 206 "bison.y"
                                {
					myprintf("primary_expression => CHAR_CONSTANT\t");
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->loc = gentemp("char", (yyvsp[0].charval));
                    emit("=", (yyval.__expression)->loc->name, (yyvsp[0].charval));
				}
#line 1919 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 213 "bison.y"
                                {
					myprintf("primary_expression => STRING_LITERAL\t");
                    (yyval.__expression) = new expression();
		            (yyval.__expression)->loc = gentemp("pointer", (yyvsp[0].strval));
		            (yyval.__expression)->loc->type->array_type = new sym_type("char");
				}
#line 1930 "y.tab.c"
    break;

  case 7: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 220 "bison.y"
                                {
					myprintf("primary_expression => ( expression )");
					(yyval.__expression) = (yyvsp[-1].__expression);
				}
#line 1939 "y.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 228 "bison.y"
                                {
					myprintf("postfix_expression => primary_expression");
                	(yyval.__array) = new Array();
                    (yyval.__array)->loc = (yyvsp[0].__expression)->loc;
                    (yyval.__array)->addr = (yyval.__array)->loc;
                    (yyval.__array)->sub_array_type = (yyvsp[0].__expression)->loc->type;
          		}
#line 1951 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 236 "bison.y"
                                {
				 	myprintf("postfix_expression => postfix_expression [ expression ]");
                    (yyval.__array) = new Array();
                    (yyval.__array)->loc = (yyvsp[-3].__array)->loc;    // same symbol as before
                    (yyval.__array)->sub_array_type = (yyvsp[-3].__array)->sub_array_type->array_type; // as we are indexing we go one level deeper
                    (yyval.__array)->addr = gentemp("int"); // temporary to compute location
                    (yyval.__array)->type = "array";    // type will be array
				 
                    if((yyvsp[-3].__array)->type == "array") {
                        // postfix_expression is already array so multiply size of subarray with expression and add
                        sym *symb = gentemp("int");
                        emit("*", symb->name, (yyvsp[-1].__expression)->loc->name, to_string(get_size((yyval.__array)->sub_array_type)));
                        emit("+", (yyval.__array)->addr->name, (yyvsp[-3].__array)->addr->name, symb->name);
                    } else {
                        emit("*", (yyval.__array)->addr->name, (yyvsp[-1].__expression)->loc->name, to_string(get_size((yyval.__array)->sub_array_type)));
                    }
				}
#line 1973 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARENTHESES  */
#line 254 "bison.y"
                                {
					myprintf("postfix_expression => postfix_expression ( argument_expression_list_opt )");
                    (yyval.__array) = new Array();
                    (yyval.__array)->loc = gentemp((yyvsp[-3].__array)->loc->type->type);
                    emit("call", (yyval.__array)->loc->name, (yyvsp[-3].__array)->loc->name, to_string((yyvsp[-1].__parameterCount)));
				}
#line 1984 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 261 "bison.y"
                                {myprintf("postfix_expression => postfix_expression . IDENTIFIER\t");}
#line 1990 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 263 "bison.y"
                                {myprintf("postfix_expression => postfix_expression -> IDENTIFIER\t");}
#line 1996 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression INCREMENT  */
#line 265 "bison.y"
                                {
					myprintf("postfix_expression => postfix_expression ++");
                    (yyval.__array) = new Array();
                    (yyval.__array)->loc = gentemp((yyvsp[-1].__array)->loc->type->type);
                    emit("=", (yyval.__array)->loc->name, (yyvsp[-1].__array)->loc->name);
                    emit("+", (yyvsp[-1].__array)->loc->name, (yyvsp[-1].__array)->loc->name, to_string(1));
				}
#line 2008 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DECREMENT  */
#line 273 "bison.y"
                                {
					myprintf("postfix_expression => postfix_expression --");
                    (yyval.__array) = new Array();
                    (yyval.__array)->loc = gentemp((yyvsp[-1].__array)->loc->type->type);
                    emit("=", (yyval.__array)->loc->name, (yyvsp[-1].__array)->loc->name);
                    emit("-", (yyvsp[-1].__array)->loc->name, (yyvsp[-1].__array)->loc->name, to_string(1));
				}
#line 2020 "y.tab.c"
    break;

  case 15: /* postfix_expression: LEFT_PARENTHESES typename RIGHT_PARENTHESES LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE  */
#line 281 "bison.y"
                                {myprintf("postfix_expression => ( typename ) { initializer_list }");}
#line 2026 "y.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_PARENTHESES typename RIGHT_PARENTHESES LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  */
#line 283 "bison.y"
                                {myprintf("postfix_expression => ( typename ) { initializer_list , }");}
#line 2032 "y.tab.c"
    break;

  case 17: /* argument_expression_list_opt: argument_expression_list  */
#line 288 "bison.y"
                                {
					myprintf("argument_expression_list_opt => argument_expression_list");
					(yyval.__parameterCount) = (yyvsp[0].__parameterCount);
				}
#line 2041 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 293 "bison.y"
                                {
					myprintf("argument_expression_list_opt => epsilon");
					(yyval.__parameterCount) = 0;
				}
#line 2050 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 301 "bison.y"
                                {
					myprintf("argument_expression_list => assignment_expression");
                    emit("param", (yyvsp[0].__expression)->loc->name);
                    (yyval.__parameterCount) = 1;
				}
#line 2060 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 307 "bison.y"
                                {
					myprintf("argument_expression_list => argument_expression_list , assignment_expression");
                    emit("param", (yyvsp[0].__expression)->loc->name);
                    (yyval.__parameterCount) = (yyvsp[-2].__parameterCount) + 1;
				}
#line 2070 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 316 "bison.y"
                                {
					myprintf("unary_expression => postfix_expression");
					(yyval.__array) = (yyvsp[0].__array);
				}
#line 2079 "y.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 321 "bison.y"
                                {
					myprintf("unary_expression => ++ unary_expression");
                    (yyval.__array) = (yyvsp[0].__array);
                    emit("+", (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->loc->name, to_string(1));
				}
#line 2089 "y.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 327 "bison.y"
                                {
					myprintf("unary_expression => -- unary_expression");
                    (yyval.__array) = (yyvsp[0].__array);
                    emit("-", (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->loc->name, to_string(1));
				}
#line 2099 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 333 "bison.y"
                                {
					myprintf("unary_expression => unary_operator cast_expression");
                    if(strcmp((yyvsp[-1].__unaryOperator), "&") == 0) {
                        // addressing, this generates a pointer, the subArray type will thus be the symbol type of the cast_expression
                        (yyval.__array) = new Array();
                        (yyval.__array)->loc = gentemp("pointer");
                        (yyval.__array)->loc->type->array_type = (yyvsp[0].__array)->loc->type;
                        emit("=&", (yyval.__array)->loc->name, (yyvsp[0].__array)->loc->name);
                    } else if(strcmp((yyvsp[-1].__unaryOperator), "*") == 0) {
                        // dereferncing, this generates a pointer, a new temporary generated with type as the subarray type of the cast_expression
                        // the subArray type will thus be one level deeper that of the cast_expression
                        (yyval.__array) = new Array();
                        (yyval.__array)->loc = (yyvsp[0].__array)->loc;
                        (yyval.__array)->addr = gentemp((yyvsp[0].__array)->addr->type->array_type->type);
                        (yyval.__array)->addr->type->array_type = (yyvsp[0].__array)->addr->type->array_type->array_type;
                        (yyval.__array)->type = "pointer";
                        emit("=*", (yyval.__array)->addr->name, (yyvsp[0].__array)->addr->name);
                    } else if(strcmp((yyvsp[-1].__unaryOperator), "+") == 0) {
                        (yyval.__array) = (yyvsp[0].__array);
                    } else { // for -, ~ and !
                        // simply apply the operator on cast_expression
                        (yyval.__array) = new Array();
                        (yyval.__array)->loc = gentemp((yyvsp[0].__array)->loc->type->type);
                        emit((yyvsp[-1].__unaryOperator), (yyval.__array)->loc->name, (yyvsp[0].__array)->loc->name);
                    }
				}
#line 2130 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 360 "bison.y"
                                {myprintf("unary_expression => sizeof unary_expression");}
#line 2136 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF LEFT_PARENTHESES typename RIGHT_PARENTHESES  */
#line 362 "bison.y"
                                {myprintf("unary_expression => sizeof ( typename )");}
#line 2142 "y.tab.c"
    break;

  case 27: /* unary_operator: BITWISE_AND  */
#line 367 "bison.y"
                                {myprintf("unary_operator => &");(yyval.__unaryOperator) = strdup("&");}
#line 2148 "y.tab.c"
    break;

  case 28: /* unary_operator: ASTERISK  */
#line 369 "bison.y"
                                {myprintf("unary_operator => *");(yyval.__unaryOperator) = strdup("*");}
#line 2154 "y.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 371 "bison.y"
                                {myprintf("unary_operator => +");(yyval.__unaryOperator) = strdup("+");}
#line 2160 "y.tab.c"
    break;

  case 30: /* unary_operator: MINUS  */
#line 373 "bison.y"
                                {myprintf("unary_operator => -");(yyval.__unaryOperator) = strdup("=-");}
#line 2166 "y.tab.c"
    break;

  case 31: /* unary_operator: TILDE  */
#line 375 "bison.y"
                                {myprintf("unary_operator => ~");(yyval.__unaryOperator) = strdup("~");}
#line 2172 "y.tab.c"
    break;

  case 32: /* unary_operator: EXCLAMATORY_MARK  */
#line 377 "bison.y"
                                {myprintf("unary_operator => !");(yyval.__unaryOperator) = strdup("!");}
#line 2178 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 382 "bison.y"
                                {
					myprintf("cast_expression => unary_expression");
					(yyval.__array) = (yyvsp[0].__array);
				}
#line 2187 "y.tab.c"
    break;

  case 34: /* cast_expression: LEFT_PARENTHESES typename RIGHT_PARENTHESES cast_expression  */
#line 387 "bison.y"
                                {myprintf("cast_expression => ( typename ) cast_expression");
                    (yyval.__array) = new Array();
                    (yyval.__array)->loc = (yyvsp[0].__array)->loc->convert(curr_type);
				}
#line 2196 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 395 "bison.y"
                                {
					myprintf("multiplicative_expression => cast_expression");
                    sym_type *baseType = (yyvsp[0].__array)->loc->type;
                    while(baseType->array_type)
                        baseType = baseType->array_type; 
                    (yyval.__expression) = new expression();
                    if((yyvsp[0].__array)->type == "array") {
                        (yyval.__expression)->loc = gentemp(baseType->type);
                        emit("=[]", (yyval.__expression)->loc->name, (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->addr->name);
                    } else if((yyvsp[0].__array)->type == "pointer") {
                        (yyval.__expression)->loc = (yyvsp[0].__array)->addr;
                    } else {
                        (yyval.__expression)->loc = (yyvsp[0].__array)->loc;
                    }
				}
#line 2216 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 411 "bison.y"
                                {
					myprintf("multiplicative_expression => multiplicative_expression * cast_expression");
                    sym_type *baseType = (yyvsp[0].__array)->loc->type;
                    while(baseType->array_type)
                        baseType = baseType->array_type;
                    sym *temp;
                    if((yyvsp[0].__array)->type == "array") {
                        temp = gentemp(baseType->type);
                        emit("=[]", temp->name, (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->addr->name);
                    } else if((yyvsp[0].__array)->type == "pointer") {
                        temp = (yyvsp[0].__array)->addr;
                    } else {
                        temp = (yyvsp[0].__array)->loc;
                    }
                    if(check_type((yyvsp[-2].__expression)->loc, temp)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp((yyvsp[-2].__expression)->loc->type->type);
                        emit("*", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, temp->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2243 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression FORWARD_SLASH cast_expression  */
#line 434 "bison.y"
                                {
					myprintf("multiplicative_expression => multiplicative_expression / cast_expression");
                    sym_type *baseType = (yyvsp[0].__array)->loc->type;
                    while(baseType->array_type)
                        baseType = baseType->array_type;
                    sym *temp;
                    if((yyvsp[0].__array)->type == "array") {
                        temp = gentemp(baseType->type);
                        emit("=[]", temp->name, (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->addr->name);
                    } else if((yyvsp[0].__array)->type == "pointer") {
                        temp = (yyvsp[0].__array)->addr;
                    } else {
                        temp = (yyvsp[0].__array)->loc;
                    }
                    if(check_type((yyvsp[-2].__expression)->loc, temp)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp((yyvsp[-2].__expression)->loc->type->type);
                        emit("/", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, temp->name);
                    } else {
                        yyerror("Type error.");
                    }
        		}
#line 2270 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 457 "bison.y"
                                {
					myprintf("multiplicative_expression => multiplicative_expression % cast_expression");
                    sym_type *baseType = (yyvsp[0].__array)->loc->type;
                    while(baseType->array_type)
                        baseType = baseType->array_type;
                    sym *temp;
                    if((yyvsp[0].__array)->type == "array") {
                        temp = gentemp(baseType->type);
                        emit("=[]", temp->name, (yyvsp[0].__array)->loc->name, (yyvsp[0].__array)->addr->name);
                    } else if((yyvsp[0].__array)->type == "pointer") {
                        temp = (yyvsp[0].__array)->addr;
                    } else {
                        temp = (yyvsp[0].__array)->loc;
                    }
                    if(check_type((yyvsp[-2].__expression)->loc, temp)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp((yyvsp[-2].__expression)->loc->type->type);
                        emit("%", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, temp->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2297 "y.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 485 "bison.y"
                                {myprintf("additive_expression => multiplicative_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2305 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 489 "bison.y"
                                {
					myprintf("additive_expression => additive_expression + multiplicative_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp((yyvsp[-2].__expression)->loc->type->type);
                        emit("+", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2320 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 500 "bison.y"
                                {
					myprintf("additive_expression => additive_expression - multiplicative_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp((yyvsp[-2].__expression)->loc->type->type);
                        emit("-", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2335 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 514 "bison.y"
                                {myprintf("shift_expression => additive_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2343 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 518 "bison.y"
                                {myprintf("shift_expression => shift_expression << additive_expression");
                    if((yyvsp[0].__expression)->loc->type->type == "int") {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp("int");
                        emit("<<", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                    } else {
                		yyerror("Type error.");
                    }
				}
#line 2357 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 528 "bison.y"
                                {
					myprintf("shift_expression => shift_expression >> additive_expression");
                    if((yyvsp[0].__expression)->loc->type->type == "int") {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->loc = gentemp("int");
                        emit(">>", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2372 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 542 "bison.y"
                                {myprintf("relational_expression => shift_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2380 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 546 "bison.y"
                                {
					myprintf("relational_expression => relational_expression < shift_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
			            (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit("<", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2398 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 560 "bison.y"
                                {
					myprintf("relational_expression => relational_expression > shift_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
		                (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit(">", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2416 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 574 "bison.y"
                                {
					myprintf("relational_expression => relational_expression <= shift_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
			            (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit("<=", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                    	yyerror("Type error.");
                    }
				}
#line 2434 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 588 "bison.y"
                                {
					myprintf("relational_expression => relational_expression >= shift_expression");
                	if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
			            (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit(">=", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2452 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 605 "bison.y"
                                {myprintf("equality_expression => relational_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2460 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression ISEQUAL relational_expression  */
#line 609 "bison.y"
                                {myprintf("equality_expression => equality_expression == relational_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyvsp[-2].__expression)->conv2int();
                        (yyvsp[0].__expression)->conv2int();
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
			            (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit("==", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                        yyerror("Type error.");
                    }
				}
#line 2479 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 624 "bison.y"
                                {
					myprintf("equality_expression => equality_expression != relational_expression");
                    if(check_type((yyvsp[-2].__expression)->loc, (yyvsp[0].__expression)->loc)) {
                        (yyvsp[-2].__expression)->conv2int();
                        (yyvsp[0].__expression)->conv2int();
                        (yyval.__expression) = new expression();
                        (yyval.__expression)->type = "boolean";
                        (yyval.__expression)->truelist = makelist(next_instr());
			            (yyval.__expression)->falselist = makelist(next_instr() + 1);
                        emit("!=", "", (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                        emit("goto", "");
                    } else {
                        yyerror("Type error.");
                	}
				}
#line 2499 "y.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 643 "bison.y"
                                {myprintf("AND_expression => equality_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2507 "y.tab.c"
    break;

  case 54: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 647 "bison.y"
                                {
					myprintf("AND_expression => AND_expression & equality_expression");
                    (yyvsp[-2].__expression)->conv2int();
                    (yyvsp[0].__expression)->conv2int();
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->type = "nonboolean";
                    (yyval.__expression)->loc = gentemp("int");
                    emit("&", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
				}
#line 2521 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 660 "bison.y"
                                {myprintf("exclusive_OR_expression => AND_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2529 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 664 "bison.y"
                                {
					myprintf("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression");
                    (yyvsp[-2].__expression)->conv2int();
                    (yyvsp[0].__expression)->conv2int();
                    (yyval.__expression) = new expression();
                	(yyval.__expression)->type = "nonboolean";
                    (yyval.__expression)->loc = gentemp("int");
                    emit("^", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
				}
#line 2543 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 677 "bison.y"
                                {myprintf("inclusive_OR_expression => exclusive_OR_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2551 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 681 "bison.y"
                                {
					myprintf("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression");
                    (yyvsp[-2].__expression)->conv2int();
                    (yyvsp[0].__expression)->conv2int();
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->type = "nonboolean";
                    (yyval.__expression)->loc = gentemp("int");
                    emit("|", (yyval.__expression)->loc->name, (yyvsp[-2].__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
				}
#line 2565 "y.tab.c"
    break;

  case 59: /* M: %empty  */
#line 693 "bison.y"
    {
        myprintf("M => epsilon");
        (yyval.__instructionNumber) = next_instr();
    }
#line 2574 "y.tab.c"
    break;

  case 60: /* N: %empty  */
#line 700 "bison.y"
    {
        myprintf("N => epsilon");
        (yyval.__statement) = new statement();
        (yyval.__statement)->nextlist = makelist(next_instr());
        emit("goto", "");
    }
#line 2585 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: inclusive_OR_expression  */
#line 710 "bison.y"
                                {
					myprintf("logical_AND_expression => inclusive_OR_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2594 "y.tab.c"
    break;

  case 62: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 715 "bison.y"
                                {
					myprintf("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");
                    (yyvsp[-3].__expression)->conv2bool();
                    (yyvsp[0].__expression)->conv2bool();
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->type = "boolean";
                    backpatch((yyvsp[-3].__expression)->truelist, (yyvsp[-1].__instructionNumber));
                    (yyval.__expression)->truelist = (yyvsp[0].__expression)->truelist;
                	(yyval.__expression)->falselist = merge((yyvsp[-3].__expression)->falselist, (yyvsp[0].__expression)->falselist);
				}
#line 2609 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_AND_expression  */
#line 729 "bison.y"
                                {
					myprintf("logical_OR_expression => logical_AND_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2618 "y.tab.c"
    break;

  case 64: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 734 "bison.y"
                                {
					myprintf("logical_OR_expression => logical_OR_expression || logical_AND_expression");
                    (yyvsp[-3].__expression)->conv2bool();
                    (yyvsp[0].__expression)->conv2bool();
                    (yyval.__expression) = new expression();
                    (yyval.__expression)->type = "boolean";
                    backpatch((yyvsp[-3].__expression)->falselist, (yyvsp[-1].__instructionNumber));
                    (yyval.__expression)->truelist = merge((yyvsp[-3].__expression)->truelist, (yyvsp[0].__expression)->truelist);
                    (yyval.__expression)->falselist = (yyvsp[0].__expression)->falselist;
				}
#line 2633 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression  */
#line 748 "bison.y"
                                {
					myprintf("conditional_expression => logical_OR_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2642 "y.tab.c"
    break;

  case 66: /* conditional_expression: logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 753 "bison.y"
                                {
					myprintf("conditional_expression => logical_OR_expression ? expression : conditional_expression");
                    (yyval.__expression)->loc = gentemp((yyvsp[-4].__expression)->loc->type->type);
                    emit("=", (yyval.__expression)->loc->name, (yyvsp[0].__expression)->loc->name);
                    list<int> l = makelist(next_instr());
                    emit("goto", "");
                    backpatch((yyvsp[-3].__statement)->nextlist, next_instr());
                    emit("=", (yyval.__expression)->loc->name, (yyvsp[-4].__expression)->loc->name);
                    l = merge(l, makelist(next_instr()));
                    emit("goto", "");
                    backpatch((yyvsp[-7].__statement)->nextlist, next_instr());
                    (yyvsp[-8].__expression)->conv2bool();
                    backpatch((yyvsp[-8].__expression)->truelist, (yyvsp[-5].__instructionNumber));
                    backpatch((yyvsp[-8].__expression)->falselist, (yyvsp[-1].__instructionNumber));
                    backpatch(l, next_instr());
				}
#line 2663 "y.tab.c"
    break;

  case 67: /* assignment_expression: conditional_expression  */
#line 773 "bison.y"
                                {
					myprintf("assignment_expression => conditional_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2672 "y.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 778 "bison.y"
                                {
					myprintf("assignment_expression => unary_expression assignment_operator assignment_expression");
                    if((yyvsp[-2].__array)->type == "array") {
                        // assignment to array
                        (yyvsp[0].__expression)->loc = (yyvsp[0].__expression)->loc->convert((yyvsp[-2].__array)->sub_array_type->type);
                        emit("[]=", (yyvsp[-2].__array)->loc->name, (yyvsp[-2].__array)->addr->name, (yyvsp[0].__expression)->loc->name);
                    } else if((yyvsp[-2].__array)->type == "pointer") {
                        // assignment to pointer
                        (yyvsp[0].__expression)->loc = (yyvsp[0].__expression)->loc->convert((yyvsp[-2].__array)->addr->type->type);
                        emit("*=", (yyvsp[-2].__array)->addr->name, (yyvsp[0].__expression)->loc->name);
                    } else {
                        // assignment to other
                        (yyvsp[0].__expression)->loc = (yyvsp[0].__expression)->loc->convert((yyvsp[-2].__array)->loc->type->type);
			            emit("=", (yyvsp[-2].__array)->loc->name, (yyvsp[0].__expression)->loc->name);
                    }
                    (yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2694 "y.tab.c"
    break;

  case 69: /* assignment_operator: EQUAL_TO  */
#line 799 "bison.y"
                                {myprintf("assignment_operator => =");}
#line 2700 "y.tab.c"
    break;

  case 70: /* assignment_operator: MUL_ASSIGN  */
#line 801 "bison.y"
                                {myprintf("assignment_operator => *=");}
#line 2706 "y.tab.c"
    break;

  case 71: /* assignment_operator: DIV_ASSIGN  */
#line 803 "bison.y"
                                {myprintf("assignment_operator => /=");}
#line 2712 "y.tab.c"
    break;

  case 72: /* assignment_operator: MOD_ASSIGN  */
#line 805 "bison.y"
                                {myprintf("assignment_operator => %=");}
#line 2718 "y.tab.c"
    break;

  case 73: /* assignment_operator: ADD_ASSIGN  */
#line 807 "bison.y"
                                {myprintf("assignment_operator => +=");}
#line 2724 "y.tab.c"
    break;

  case 74: /* assignment_operator: SUB_ASSIGN  */
#line 809 "bison.y"
                                {myprintf("assignment_operator => -=");}
#line 2730 "y.tab.c"
    break;

  case 75: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 811 "bison.y"
                                {myprintf("assignment_operator => <<=");}
#line 2736 "y.tab.c"
    break;

  case 76: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 813 "bison.y"
                                {myprintf("assignment_operator => >>=");}
#line 2742 "y.tab.c"
    break;

  case 77: /* assignment_operator: AND_ASSIGN  */
#line 815 "bison.y"
                                {myprintf("assignment_operator => &=");}
#line 2748 "y.tab.c"
    break;

  case 78: /* assignment_operator: XOR_ASSIGN  */
#line 817 "bison.y"
                                {myprintf("assignment_operator => ^=");}
#line 2754 "y.tab.c"
    break;

  case 79: /* assignment_operator: OR_ASSIGN  */
#line 819 "bison.y"
                                {myprintf("assignment_operator => |=");}
#line 2760 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 824 "bison.y"
                                {	
					myprintf("expression => assignment_expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 2769 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 829 "bison.y"
                                {myprintf("expression => expression , assignment_expression");}
#line 2775 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 834 "bison.y"
                                {myprintf("constant_expression => conditional_expression");}
#line 2781 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 843 "bison.y"
                                {myprintf("declaration => declaration_specifiers init_declarator_list_opt ;");}
#line 2787 "y.tab.c"
    break;

  case 84: /* init_declarator_list_opt: init_declarator_list  */
#line 848 "bison.y"
                                {myprintf("init_declarator_list_opt => init_declarator_list");}
#line 2793 "y.tab.c"
    break;

  case 85: /* init_declarator_list_opt: %empty  */
#line 850 "bison.y"
                                {myprintf("init_declarator_list_opt => epsilon");}
#line 2799 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 855 "bison.y"
                                {myprintf("declaration_specifiers => storage_class_specifier declaration_specifiers_opt");}
#line 2805 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 857 "bison.y"
                                {myprintf("declaration_specifiers => type_specifier declaration_specifiers_opt ");}
#line 2811 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 859 "bison.y"
                                {myprintf("declaration_specifiers => type_qualifier declaration_specifiers_opt");}
#line 2817 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 861 "bison.y"
                                {myprintf("declaration_specifiers => function_specifier declaration_specifiers_opt");}
#line 2823 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: declaration_specifiers  */
#line 866 "bison.y"
                                {myprintf("declaration_specifiers_opt => declaration_specifiers");}
#line 2829 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 868 "bison.y"
                                {myprintf("declaration_specifiers_opt => epsilon");}
#line 2835 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 873 "bison.y"
                                {myprintf("init_declarator_list => init_declarator");}
#line 2841 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 875 "bison.y"
                                {myprintf("init_declarator_list => init_declarator_list , init_declarator");}
#line 2847 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 880 "bison.y"
                                {
					myprintf("init_declarator => declarator");
					(yyval.__symbol) = (yyvsp[0].__symbol);	
				}
#line 2856 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator EQUAL_TO initializer  */
#line 885 "bison.y"
                                {
					myprintf("init_declarator => declarator = initializer");     
                    if((yyvsp[0].__symbol)->val != "") (yyvsp[-2].__symbol)->val = (yyvsp[0].__symbol)->val;
		            emit("=", (yyvsp[-2].__symbol)->name, (yyvsp[0].__symbol)->name);
				}
#line 2866 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 894 "bison.y"
                                {myprintf("storage_class_specifier => extern");}
#line 2872 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 896 "bison.y"
                                {myprintf("storage_class_specifier => static");}
#line 2878 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 898 "bison.y"
                                {myprintf("storage_class_specifier => auto");}
#line 2884 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 900 "bison.y"
                                {myprintf("storage_class_specifier => register");}
#line 2890 "y.tab.c"
    break;

  case 100: /* type_specifier: VOID  */
#line 905 "bison.y"
                                {myprintf("type_specifier => void");}
#line 2896 "y.tab.c"
    break;

  case 101: /* type_specifier: CHAR  */
#line 907 "bison.y"
                                {myprintf("type_specifier => char");}
#line 2902 "y.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 909 "bison.y"
                                {myprintf("type_specifier => short");}
#line 2908 "y.tab.c"
    break;

  case 103: /* type_specifier: INT  */
#line 911 "bison.y"
                                {myprintf("type_specifier => int");}
#line 2914 "y.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 913 "bison.y"
                                {myprintf("type_specifier => long");}
#line 2920 "y.tab.c"
    break;

  case 105: /* type_specifier: FLOAT  */
#line 915 "bison.y"
                                {myprintf("type_specifier => float");}
#line 2926 "y.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 917 "bison.y"
                                {myprintf("type_specifier => double");}
#line 2932 "y.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 919 "bison.y"
                                {myprintf("type_specifier => signed");}
#line 2938 "y.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 921 "bison.y"
                                {myprintf("type_specifier => unsigned");}
#line 2944 "y.tab.c"
    break;

  case 109: /* type_specifier: BOOL  */
#line 923 "bison.y"
                                {myprintf("type_specifier => _Bool");}
#line 2950 "y.tab.c"
    break;

  case 110: /* type_specifier: COMPLEX  */
#line 925 "bison.y"
                                {myprintf("type_specifier => _Complex");}
#line 2956 "y.tab.c"
    break;

  case 111: /* type_specifier: IMAGINARY  */
#line 927 "bison.y"
                                {myprintf("type_specifier => _Imaginary");}
#line 2962 "y.tab.c"
    break;

  case 112: /* type_specifier: enum_specifier  */
#line 929 "bison.y"
                                {myprintf("type_specifier => enum_specifier");}
#line 2968 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 934 "bison.y"
                                {myprintf("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt");}
#line 2974 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 936 "bison.y"
                                {myprintf("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt");}
#line 2980 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 941 "bison.y"
                                {myprintf("specifier_qualifier_list_opt => specifier_qualifier_list");}
#line 2986 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: %empty  */
#line 943 "bison.y"
                                {myprintf("specifier_qualifier_list_opt => epsilon");}
#line 2992 "y.tab.c"
    break;

  case 117: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE  */
#line 948 "bison.y"
                                                {myprintf("enum_specifier => enum identifier_opt { enumerator_list }");}
#line 2998 "y.tab.c"
    break;

  case 118: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  */
#line 950 "bison.y"
                                                {myprintf("enum_specifier => enum identifier_opt { enumerator_list , }");}
#line 3004 "y.tab.c"
    break;

  case 119: /* enum_specifier: ENUM IDENTIFIER  */
#line 952 "bison.y"
                                                {myprintf("enum_specifier => enum IDENTIFIER\t");}
#line 3010 "y.tab.c"
    break;

  case 120: /* identifier_opt: IDENTIFIER  */
#line 957 "bison.y"
                                {myprintf("identifier_opt => IDENTIFIER\t");}
#line 3016 "y.tab.c"
    break;

  case 121: /* identifier_opt: %empty  */
#line 959 "bison.y"
                                {myprintf("identifier_opt => epsilon");}
#line 3022 "y.tab.c"
    break;

  case 122: /* enumerator_list: enumerator  */
#line 964 "bison.y"
                                {myprintf("enumerator_list => enumerator");}
#line 3028 "y.tab.c"
    break;

  case 123: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 966 "bison.y"
                                {myprintf("enumerator_list => enumerator_list , enumerator");}
#line 3034 "y.tab.c"
    break;

  case 124: /* enumerator: IDENTIFIER  */
#line 971 "bison.y"
                                {myprintf("enumerator => IDENTIFIER\t");}
#line 3040 "y.tab.c"
    break;

  case 125: /* enumerator: IDENTIFIER EQUAL_TO constant_expression  */
#line 973 "bison.y"
                                {myprintf("enumerator => IDENTIFIER = constant_expression\t");}
#line 3046 "y.tab.c"
    break;

  case 126: /* type_qualifier: CONST  */
#line 978 "bison.y"
                                {myprintf("type_qualifier => const");}
#line 3052 "y.tab.c"
    break;

  case 127: /* type_qualifier: RESTRICT  */
#line 980 "bison.y"
                                {myprintf("type_qualifier => restrict");}
#line 3058 "y.tab.c"
    break;

  case 128: /* type_qualifier: VOLATILE  */
#line 982 "bison.y"
                                {myprintf("type_qualifier => volatile");}
#line 3064 "y.tab.c"
    break;

  case 129: /* function_specifier: INLINE  */
#line 987 "bison.y"
                                {myprintf("function_specifier => inline");}
#line 3070 "y.tab.c"
    break;

  case 130: /* declarator: pointer direct_declarator  */
#line 992 "bison.y"
                { 
                    myprintf("declarator => pointer direct_declarator"); 
                    sym_type *it = (yyvsp[-1].__symbolType);
                    while(it->array_type != NULL) 
                        it = it->array_type;
                    it->array_type = (yyvsp[0].__symbol)->type;
                    (yyval.__symbol) = (yyvsp[0].__symbol)->update((yyvsp[-1].__symbolType));
                }
#line 3083 "y.tab.c"
    break;

  case 131: /* declarator: direct_declarator  */
#line 1001 "bison.y"
                { 
                    myprintf("declarator => direct_declarator"); 
                }
#line 3091 "y.tab.c"
    break;

  case 132: /* change_scope: %empty  */
#line 1007 "bison.y"
            {
                if(curr_sym->nested_symtab == NULL) {
                    change_table(new sym_table(""));
                }
                else{
                    change_table(curr_sym->nested_symtab);
                    emit("label", currST->name);
                }
            }
#line 3105 "y.tab.c"
    break;

  case 133: /* direct_declarator: IDENTIFIER  */
#line 1030 "bison.y"
                        { 
                            myprintf("direct_declarator => IDENTIFIER"); 
                            (yyval.__symbol) = (yyvsp[0].idval)->update(new sym_type(curr_type)); // update type to the last type seen
                            curr_sym = (yyval.__symbol);
                        }
#line 3115 "y.tab.c"
    break;

  case 134: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 1036 "bison.y"
                        { 
                            myprintf("direct_declarator => ( declarator )"); 
                            (yyval.__symbol) = (yyvsp[-1].__symbol);
                        }
#line 3124 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1041 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
#line 3132 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list RIGHT_SQUARE_BRACKET  */
#line 1045 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
#line 3140 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1049 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ assignment_expression ]"); 
                            sym_type *it1 = (yyvsp[-3].__symbol)->type, *it2 = NULL;
                            while(it1->type == "array") { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->array_type;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->array_type =  new sym_type("array", it1, atoi((yyvsp[-1].__expression)->loc->val.c_str()));	
                                (yyval.__symbol) = (yyvsp[-3].__symbol)->update((yyvsp[-3].__symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.__symbol) = (yyvsp[-3].__symbol)->update(new sym_type("array", (yyvsp[-3].__symbol)->type, atoi((yyvsp[-1].__expression)->loc->val.c_str())));
                            }
                        }
#line 3162 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 1067 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ ]"); 
                            // same as the previous rule, just we dont know the size so put it as 0
                            sym_type *it1 = (yyvsp[-2].__symbol)->type, *it2 = NULL;
                            while(it1->type == "array") { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->array_type;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->array_type =  new sym_type("array", it1, 0);	
                                (yyval.__symbol) = (yyvsp[-2].__symbol)->update((yyvsp[-2].__symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.__symbol) = (yyvsp[-2].__symbol)->update(new sym_type("array", (yyvsp[-2].__symbol)->type, 0));
                            }
                        }
#line 3185 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1086 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
#line 3193 "y.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1090 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
#line 3201 "y.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1094 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
#line 3209 "y.tab.c"
    break;

  case 142: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1098 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
#line 3217 "y.tab.c"
    break;

  case 143: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1102 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator [ * ]"); 
                        }
#line 3225 "y.tab.c"
    break;

  case 144: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope parameter_type_list RIGHT_PARENTHESES  */
#line 1106 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator ( parameter_type_list )"); 
                            // function declaration
                            currST->name = (yyvsp[-4].__symbol)->name;
                            if((yyvsp[-4].__symbol)->type->type != "void") {
                                // set type of return value
                                currST->lookup("return")->update((yyvsp[-4].__symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[-4].__symbol)->nested_symtab = currST;
                            currST->parent = gblST;
                            change_table(gblST);
                            curr_sym = (yyval.__symbol);
                        }
#line 3244 "y.tab.c"
    break;

  case 145: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 1121 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
#line 3252 "y.tab.c"
    break;

  case 146: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope RIGHT_PARENTHESES  */
#line 1125 "bison.y"
                        { 
                            myprintf("direct_declarator => direct_declarator ( )"); 
                            // same as the previous rule
                            currST->name = (yyvsp[-3].__symbol)->name;
                            if((yyvsp[-3].__symbol)->type->type != "void") {
                                // set type of return value
                                currST->lookup("return")->update((yyvsp[-3].__symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[-3].__symbol)->nested_symtab = currST;
                            currST->parent = gblST;
                            change_table(gblST);
                            curr_sym = (yyval.__symbol);
                        }
#line 3271 "y.tab.c"
    break;

  case 147: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1143 "bison.y"
                                {myprintf("type_qualifier_list_opt => type_qualifier_list");}
#line 3277 "y.tab.c"
    break;

  case 148: /* type_qualifier_list_opt: %empty  */
#line 1145 "bison.y"
                                {myprintf("type_qualifier_list_opt => epsilon");}
#line 3283 "y.tab.c"
    break;

  case 149: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 1166 "bison.y"
                                {	
					myprintf("pointer => * type_qualifier_list_opt");
               		(yyval.__symbolType) = new sym_type("pointer");
				}
#line 3292 "y.tab.c"
    break;

  case 150: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 1171 "bison.y"
                                {
					myprintf("pointer => * type_qualifier_list_opt pointer");
                	(yyval.__symbolType) = new sym_type("pointer", (yyvsp[0].__symbolType));
				}
#line 3301 "y.tab.c"
    break;

  case 151: /* type_qualifier_list: type_qualifier  */
#line 1179 "bison.y"
                                {myprintf("type_qualifier_list => type_qualifier");}
#line 3307 "y.tab.c"
    break;

  case 152: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1181 "bison.y"
                                {myprintf("type_qualifier_list => type_qualifier_list type_qualifier");}
#line 3313 "y.tab.c"
    break;

  case 153: /* parameter_type_list: parameter_list  */
#line 1186 "bison.y"
                                {myprintf("parameter_type_list => parameter_list");}
#line 3319 "y.tab.c"
    break;

  case 154: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1188 "bison.y"
                                {myprintf("parameter_type_list => parameter_list , ...");}
#line 3325 "y.tab.c"
    break;

  case 155: /* parameter_list: parameter_declaration  */
#line 1193 "bison.y"
                                {myprintf("parameter_list => parameter_declaration");}
#line 3331 "y.tab.c"
    break;

  case 156: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1195 "bison.y"
                                {myprintf("parameter_list => parameter_list , parameter_declaration");}
#line 3337 "y.tab.c"
    break;

  case 157: /* parameter_declaration: declaration_specifiers declarator  */
#line 1200 "bison.y"
                                {myprintf("parameter_declaration => declaration_specifiers declarator");}
#line 3343 "y.tab.c"
    break;

  case 158: /* parameter_declaration: declaration_specifiers  */
#line 1202 "bison.y"
                                {myprintf("parameter_declaration => declaration_specifiers");}
#line 3349 "y.tab.c"
    break;

  case 159: /* identifier_list: IDENTIFIER  */
#line 1207 "bison.y"
                                {myprintf("identifier_list => IDENTIFIER\t");}
#line 3355 "y.tab.c"
    break;

  case 160: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1209 "bison.y"
                                {myprintf("identifier_list => identifier_list , IDENTIFIER\t");}
#line 3361 "y.tab.c"
    break;

  case 161: /* typename: specifier_qualifier_list  */
#line 1214 "bison.y"
                                {myprintf("typename => specifier_qualifier_list");}
#line 3367 "y.tab.c"
    break;

  case 162: /* initializer: assignment_expression  */
#line 1219 "bison.y"
                                {
					myprintf("initializer => assignment_expression");
                    (yyval.__symbol) = (yyvsp[0].__expression)->loc;
				}
#line 3376 "y.tab.c"
    break;

  case 163: /* initializer: LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE  */
#line 1224 "bison.y"
                                {myprintf("initializer => { initializer_list }");}
#line 3382 "y.tab.c"
    break;

  case 164: /* initializer: LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  */
#line 1226 "bison.y"
                                {myprintf("initializer => { initializer_list , }");}
#line 3388 "y.tab.c"
    break;

  case 165: /* initializer_list: designation_opt initializer  */
#line 1231 "bison.y"
                                {myprintf("initializer_list => designation_opt initializer");}
#line 3394 "y.tab.c"
    break;

  case 166: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1233 "bison.y"
                                {myprintf("initializer_list => initializer_list , designation_opt initializer");}
#line 3400 "y.tab.c"
    break;

  case 167: /* designation_opt: designation  */
#line 1238 "bison.y"
                                {myprintf("designation_opt => designation");}
#line 3406 "y.tab.c"
    break;

  case 168: /* designation_opt: %empty  */
#line 1240 "bison.y"
                                {myprintf("designation_opt => epsilon");}
#line 3412 "y.tab.c"
    break;

  case 169: /* designation: designator_list EQUAL_TO  */
#line 1245 "bison.y"
                                {myprintf("designation => designator_list =");}
#line 3418 "y.tab.c"
    break;

  case 170: /* designator_list: designator  */
#line 1250 "bison.y"
                                {myprintf("designator_list => designator");}
#line 3424 "y.tab.c"
    break;

  case 171: /* designator_list: designator_list designator  */
#line 1252 "bison.y"
                                {myprintf("designator_list => designator_list designator");}
#line 3430 "y.tab.c"
    break;

  case 172: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 1257 "bison.y"
                                {myprintf("designator => [ constant_expression ]");}
#line 3436 "y.tab.c"
    break;

  case 173: /* designator: DOT IDENTIFIER  */
#line 1259 "bison.y"
                                {myprintf("designator => . IDENTIFIER\t");}
#line 3442 "y.tab.c"
    break;

  case 174: /* statement: labeled_statement  */
#line 1266 "bison.y"
                                {myprintf("statement => labeled_statement");}
#line 3448 "y.tab.c"
    break;

  case 175: /* statement: compound_statement  */
#line 1268 "bison.y"
                                {
					myprintf("statement => compound_statement");
					(yyval.__statement) = (yyvsp[0].__statement);
				}
#line 3457 "y.tab.c"
    break;

  case 176: /* statement: expression_statement  */
#line 1273 "bison.y"
                                {
					myprintf("statement => expression_statement");
                    (yyval.__statement) = new statement();
                    (yyval.__statement)->nextlist = (yyvsp[0].__expression)->nextlist;
				}
#line 3467 "y.tab.c"
    break;

  case 177: /* statement: selection_statement  */
#line 1279 "bison.y"
                                {
					myprintf("statement => selection_statement");
					(yyval.__statement) = (yyvsp[0].__statement);	
				}
#line 3476 "y.tab.c"
    break;

  case 178: /* statement: iteration_statement  */
#line 1284 "bison.y"
                                {
					myprintf("statement => iteration_statement");
					(yyval.__statement) = (yyvsp[0].__statement);	
				}
#line 3485 "y.tab.c"
    break;

  case 179: /* statement: jump_statement  */
#line 1289 "bison.y"
                                {
					myprintf("statement => jump_statement");
					(yyval.__statement) = (yyvsp[0].__statement);	
				}
#line 3494 "y.tab.c"
    break;

  case 180: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1297 "bison.y"
                                {myprintf("labeled_statement => IDENTIFIER : statement\t");}
#line 3500 "y.tab.c"
    break;

  case 181: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1299 "bison.y"
                                {myprintf("labeled_statement => case constant_expression : statement");}
#line 3506 "y.tab.c"
    break;

  case 182: /* labeled_statement: DEFAULT COLON statement  */
#line 1301 "bison.y"
                                {myprintf("labeled_statement => default : statement");}
#line 3512 "y.tab.c"
    break;

  case 183: /* change_block: %empty  */
#line 1305 "bison.y"
                    {
                        string name = currST->name + "_" + to_string(table_count);
                        table_count++;
                        sym *s = currST->lookup(name); // create new entry in symbol table
                        s->nested_symtab = new sym_table(name, currST);
                        s->type = new sym_type("block");
                        curr_sym = s;
                    }
#line 3525 "y.tab.c"
    break;

  case 184: /* compound_statement: LEFT_CURLY_BRACE change_block change_scope block_item_list_opt RIGHT_CURLY_BRACE  */
#line 1317 "bison.y"
                                {myprintf("compound_statement => { block_item_list_opt }");
				    (yyval.__statement) = (yyvsp[-1].__statement);
                    change_table(currST->parent);
				}
#line 3534 "y.tab.c"
    break;

  case 185: /* block_item_list_opt: block_item_list  */
#line 1325 "bison.y"
                                {myprintf("block_item_list_opt => block_item_list");
					(yyval.__statement) = (yyvsp[0].__statement);
				}
#line 3542 "y.tab.c"
    break;

  case 186: /* block_item_list_opt: %empty  */
#line 1329 "bison.y"
                                {myprintf("block_item_list_opt => epsilon");
					(yyval.__statement) = new statement();
				}
#line 3550 "y.tab.c"
    break;

  case 187: /* block_item_list: block_item  */
#line 1336 "bison.y"
                                {myprintf("block_item_list => block_item");
					(yyval.__statement) = (yyvsp[0].__statement);
				}
#line 3558 "y.tab.c"
    break;

  case 188: /* block_item_list: block_item_list M block_item  */
#line 1340 "bison.y"
                                {
					myprintf("block_item_list => block_item_list block_item");
                    (yyval.__statement) = (yyvsp[0].__statement);
                    backpatch((yyvsp[-2].__statement)->nextlist,(yyvsp[-1].__instructionNumber));
				}
#line 3568 "y.tab.c"
    break;

  case 189: /* block_item: declaration  */
#line 1349 "bison.y"
                                {myprintf("block_item => declaration");
					(yyval.__statement) = new statement();
				}
#line 3576 "y.tab.c"
    break;

  case 190: /* block_item: statement  */
#line 1353 "bison.y"
                                {myprintf("block_item => statement");
					(yyval.__statement) = (yyvsp[0].__statement);
				}
#line 3584 "y.tab.c"
    break;

  case 191: /* expression_statement: expression_opt SEMICOLON  */
#line 1360 "bison.y"
                                {myprintf("expression_statement => expression_opt ;");
					(yyval.__expression) = (yyvsp[-1].__expression);
				}
#line 3592 "y.tab.c"
    break;

  case 192: /* expression_opt: expression  */
#line 1367 "bison.y"
                                {myprintf("expression_opt => expression");
					(yyval.__expression) = (yyvsp[0].__expression);
				}
#line 3600 "y.tab.c"
    break;

  case 193: /* expression_opt: %empty  */
#line 1371 "bison.y"
                                {myprintf("expression_opt => epsilon");
					(yyval.__expression) = new expression();
				}
#line 3608 "y.tab.c"
    break;

  case 194: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N  */
#line 1378 "bison.y"
                                {
					myprintf("selection_statement => if ( expression ) statement");
				    (yyval.__statement) = new statement();
                    (yyvsp[-4].__expression)->conv2bool();
                    backpatch((yyvsp[-4].__expression)->truelist, (yyvsp[-2].__instructionNumber)); // if true go to M
                    (yyval.__statement)->nextlist = merge((yyvsp[-4].__expression)->falselist, merge((yyvsp[-1].__statement)->nextlist, (yyvsp[0].__statement)->nextlist)); // exits
				}
#line 3620 "y.tab.c"
    break;

  case 195: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N ELSE M statement  */
#line 1386 "bison.y"
                                {
					myprintf("selection_statement => if ( expression ) statement else statement");
				    (yyval.__statement) = new statement();
                    (yyvsp[-7].__expression)->conv2bool();
                    backpatch((yyvsp[-7].__expression)->truelist, (yyvsp[-5].__instructionNumber)); // if true go to M
                    backpatch((yyvsp[-7].__expression)->falselist, (yyvsp[-1].__instructionNumber)); // if false go to else
                    (yyval.__statement)->nextlist = merge((yyvsp[0].__statement)->nextlist, merge((yyvsp[-4].__statement)->nextlist, (yyvsp[-3].__statement)->nextlist)); // exits
				}
#line 3633 "y.tab.c"
    break;

  case 196: /* selection_statement: SWITCH LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 1395 "bison.y"
                                {myprintf("selection_statement => switch ( expression ) statement");}
#line 3639 "y.tab.c"
    break;

  case 197: /* iteration_statement: WHILE M LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement  */
#line 1400 "bison.y"
                                {
					myprintf("iteration_statement => while ( expression ) statement");
				    (yyval.__statement) = new statement();
                    (yyvsp[-3].__expression)->conv2bool();
                    backpatch((yyvsp[0].__statement)->nextlist, (yyvsp[-5].__instructionNumber)); // after statement go back to M1
                    backpatch((yyvsp[-3].__expression)->truelist, (yyvsp[-1].__instructionNumber)); // if true go to M2
                    (yyval.__statement)->nextlist = (yyvsp[-3].__expression)->falselist; // exit if false
                    emit("goto", to_string((yyvsp[-5].__instructionNumber)));
				}
#line 3653 "y.tab.c"
    break;

  case 198: /* iteration_statement: DO M statement M WHILE LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 1410 "bison.y"
                                {
					myprintf("iteration_statement => do statement while ( expression ) ;");
				    (yyval.__statement) = new statement();
                    (yyvsp[-2].__expression)->conv2bool();
                    backpatch((yyvsp[-2].__expression)->truelist, (yyvsp[-7].__instructionNumber)); // if true go back to M1
                    backpatch((yyvsp[-6].__statement)->nextlist, (yyvsp[-5].__instructionNumber)); // after statement is executed go to M2
                    (yyval.__statement)->nextlist = (yyvsp[-2].__expression)->falselist; // exit if false
				}
#line 3666 "y.tab.c"
    break;

  case 199: /* iteration_statement: FOR LEFT_PARENTHESES expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_PARENTHESES M statement  */
#line 1419 "bison.y"
                                {
					myprintf("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement");
					(yyval.__statement) = new statement();
                    (yyvsp[-7].__expression)->conv2bool();
                    backpatch((yyvsp[-7].__expression)->truelist, (yyvsp[-1].__instructionNumber)); // if true go to M3 (loop body)
                    backpatch((yyvsp[-3].__statement)->nextlist, (yyvsp[-8].__instructionNumber)); // after N go to M1 (condition check)
                    backpatch((yyvsp[0].__statement)->nextlist, (yyvsp[-5].__instructionNumber)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
                    emit("goto", to_string((yyvsp[-5].__instructionNumber)));
                    (yyval.__statement)->nextlist = (yyvsp[-7].__expression)->falselist; // exit if false
				}
#line 3681 "y.tab.c"
    break;

  case 200: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_opt SEMICOLON expression_opt RIGHT_PARENTHESES statement  */
#line 1430 "bison.y"
                                {myprintf("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement");}
#line 3687 "y.tab.c"
    break;

  case 201: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1435 "bison.y"
                                {myprintf("jump_statement => goto IDENTIFIER ;\t");}
#line 3693 "y.tab.c"
    break;

  case 202: /* jump_statement: CONTINUE SEMICOLON  */
#line 1437 "bison.y"
                                {myprintf("jump_statement => continue ;");}
#line 3699 "y.tab.c"
    break;

  case 203: /* jump_statement: BREAK SEMICOLON  */
#line 1439 "bison.y"
                                {myprintf("jump_statement => break ;");}
#line 3705 "y.tab.c"
    break;

  case 204: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1441 "bison.y"
                                {
					myprintf("jump_statement => return expression_opt ;");
				    (yyval.__statement) = new statement();
                    if((yyvsp[-1].__expression)->loc != NULL) {
                        emit("return", (yyvsp[-1].__expression)->loc->name); // emit the current symbol name at return if it exists otherwise empty
                    } else {
                        emit("return", "");
                    }
				}
#line 3719 "y.tab.c"
    break;

  case 205: /* translation_unit: external_declaration  */
#line 1456 "bison.y"
                                {myprintf("translation_unit => external_declaration");}
#line 3725 "y.tab.c"
    break;

  case 206: /* translation_unit: translation_unit external_declaration  */
#line 1458 "bison.y"
                                {myprintf("translation_unit => translation_unit external_declaration");}
#line 3731 "y.tab.c"
    break;

  case 207: /* external_declaration: function_definition  */
#line 1463 "bison.y"
                                {myprintf("external_declaration => function_definition");}
#line 3737 "y.tab.c"
    break;

  case 208: /* external_declaration: declaration  */
#line 1465 "bison.y"
                                {myprintf("external_declaration => declaration");}
#line 3743 "y.tab.c"
    break;

  case 209: /* function_definition: declaration_specifiers declarator declaration_list_opt change_scope LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE  */
#line 1470 "bison.y"
                                {
					myprintf("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement");
					table_count = 0;
					(yyvsp[-5].__symbol)->is_function = true;
					change_table(gblST);
				}
#line 3754 "y.tab.c"
    break;

  case 210: /* declaration_list_opt: declaration_list  */
#line 1480 "bison.y"
                                {myprintf("declaration_list_opt => declaration_list");}
#line 3760 "y.tab.c"
    break;

  case 211: /* declaration_list_opt: %empty  */
#line 1482 "bison.y"
                                {myprintf("declaration_list_opt => epsilon");}
#line 3766 "y.tab.c"
    break;

  case 212: /* declaration_list: declaration  */
#line 1487 "bison.y"
                                {myprintf("declaration_list => declaration");}
#line 3772 "y.tab.c"
    break;

  case 213: /* declaration_list: declaration_list declaration  */
#line 1489 "bison.y"
                                {myprintf("declaration_list => declaration_list declaration");}
#line 3778 "y.tab.c"
    break;


#line 3782 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1491 "bison.y"


// void yyerror(char *s){
// 	printf("Error in line %d --> %s\n",lc,s);
// 	return;
// }

// void myprintf(char *s){
// 	printf("Line No. %d\t\t%s\n",lc,s);
// }

void yyerror(string s){
  cout << "Error in line" << lc << " --> " << s << "\n";
	return;
}

void myprintf(string s){
  cout << "Line No. " << lc << "\t\t" << s << "\n" ;
}
