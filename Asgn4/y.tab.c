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
#line 1 "ass4.y"

    #include <stdio.h>
	extern int lc;
    extern int yylex();
    void yyerror(char * s);
	void myprintf(char * s);

#line 79 "y.tab.c"

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
    RIGHT_PARANTHESES = 320,       /* RIGHT_PARANTHESES  */
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
    SEMICOLON = 342                /* SEMICOLON  */
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
#define RIGHT_PARANTHESES 320
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "ass4.y"

	int intval;
	char* charval;
	char* strval;
	char* idval;
	float floatval;

#line 314 "y.tab.c"

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
  YYSYMBOL_RIGHT_PARANTHESES = 65,         /* RIGHT_PARANTHESES  */
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
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_primary_expression = 89,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 90,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 91, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 92,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 93,          /* unary_expression  */
  YYSYMBOL_unary_operator = 94,            /* unary_operator  */
  YYSYMBOL_cast_expression = 95,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 96, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 97,       /* additive_expression  */
  YYSYMBOL_shift_expression = 98,          /* shift_expression  */
  YYSYMBOL_relational_expression = 99,     /* relational_expression  */
  YYSYMBOL_equality_expression = 100,      /* equality_expression  */
  YYSYMBOL_AND_expression = 101,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 102,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 103,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 104,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 105,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 106,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 107,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 108,      /* assignment_operator  */
  YYSYMBOL_expression = 109,               /* expression  */
  YYSYMBOL_constant_expression = 110,      /* constant_expression  */
  YYSYMBOL_declaration = 111,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 112, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 113,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 114, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 116,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 117,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 118,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 119, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 120, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 122,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 123,          /* enumerator_list  */
  YYSYMBOL_enumerator = 124,               /* enumerator  */
  YYSYMBOL_type_qualifier = 125,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 126,       /* function_specifier  */
  YYSYMBOL_declarator = 127,               /* declarator  */
  YYSYMBOL_pointer_opt = 128,              /* pointer_opt  */
  YYSYMBOL_direct_declarator = 129,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 130,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 131, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 132,      /* identifier_list_opt  */
  YYSYMBOL_pointer = 133,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 134,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 135,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 136,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 137,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 138,          /* identifier_list  */
  YYSYMBOL_typename = 139,                 /* typename  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_designation_opt = 142,          /* designation_opt  */
  YYSYMBOL_designation = 143,              /* designation  */
  YYSYMBOL_designator_list = 144,          /* designator_list  */
  YYSYMBOL_designator = 145,               /* designator  */
  YYSYMBOL_statement = 146,                /* statement  */
  YYSYMBOL_labeled_statement = 147,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 148,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 149,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 150,          /* block_item_list  */
  YYSYMBOL_block_item = 151,               /* block_item  */
  YYSYMBOL_expression_statement = 152,     /* expression_statement  */
  YYSYMBOL_expression_opt = 153,           /* expression_opt  */
  YYSYMBOL_selection_statement = 154,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 155,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 156,           /* jump_statement  */
  YYSYMBOL_translation_unit = 157,         /* translation_unit  */
  YYSYMBOL_external_declaration = 158,     /* external_declaration  */
  YYSYMBOL_function_definition = 159,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 160,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 161          /* declaration_list  */
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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   741

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  338

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   342


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
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   116,   118,   120,   122,   124,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   150,   153,   157,
     159,   164,   166,   168,   170,   172,   174,   179,   181,   183,
     185,   187,   189,   194,   196,   201,   203,   205,   207,   212,
     214,   216,   221,   223,   225,   230,   232,   234,   236,   238,
     243,   245,   247,   252,   254,   259,   261,   266,   268,   273,
     275,   280,   282,   287,   289,   294,   296,   301,   303,   305,
     307,   309,   311,   313,   315,   317,   319,   321,   326,   328,
     333,   338,   343,   346,   350,   352,   354,   356,   361,   364,
     368,   370,   375,   377,   382,   384,   386,   388,   393,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   422,   424,   429,   432,   442,   444,   446,   451,   454,
     458,   460,   465,   467,   472,   474,   476,   481,   486,   491,
     494,   498,   500,   502,   504,   506,   508,   510,   512,   517,
     520,   524,   527,   531,   534,   538,   540,   545,   547,   552,
     554,   559,   561,   566,   568,   573,   575,   580,   585,   587,
     589,   594,   596,   601,   604,   608,   613,   615,   620,   622,
     627,   629,   631,   633,   635,   637,   642,   644,   646,   650,
     655,   658,   662,   664,   669,   671,   676,   681,   684,   688,
     690,   692,   697,   699,   701,   703,   708,   710,   712,   714,
     719,   721,   726,   728,   733,   738,   741,   745,   747
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
  "RETURN", "LEFT_PARENTHESES", "RIGHT_PARANTHESES", "DOT", "COMMA",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "LESS_THAN", "GREATER_THAN", "EQUAL_TO",
  "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR", "ASTERISK", "FORWARD_SLASH",
  "PLUS", "MINUS", "MODULO", "TILDE", "EXCLAMATORY_MARK", "QUESTION_MARK",
  "COLON", "SEMICOLON", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "typename", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
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

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     690,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,    42,  -216,   -65,   690,   690,  -216,   690,   690,   578,
    -216,  -216,   -55,   -14,    37,   -36,    30,  -216,   623,    11,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    76,  -216,
      48,    37,  -216,    48,   367,  -216,   -65,    59,   690,  -216,
      48,   -38,    67,   -19,  -216,  -216,  -216,  -216,    79,  -216,
    -216,  -216,  -216,  -216,   417,   417,   499,   355,    -4,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,    78,   176,   509,  -216,
     -61,   -43,    88,    26,   119,    83,    84,    90,   166,    -8,
    -216,  -216,  -216,   242,  -216,  -216,   123,   601,   102,   509,
       7,  -216,   355,  -216,  -216,   355,  -216,  -216,    80,   641,
    -216,   641,   128,   207,   509,    -2,   367,  -216,   -24,  -216,
     211,  -216,  -216,   509,   214,   509,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,   509,  -216,  -216,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   133,
     509,   140,   163,   164,   165,   404,   167,   230,   147,   148,
     509,   169,  -216,  -216,  -216,  -216,   168,   242,  -216,  -216,
     150,  -216,  -216,  -216,  -216,  -216,   -18,   175,   177,   174,
    -216,   187,    37,   522,   108,  -216,  -216,  -216,  -216,   178,
     190,  -216,   509,  -216,  -216,  -216,   466,  -216,   188,    23,
    -216,  -216,  -216,  -216,  -216,   191,   192,  -216,  -216,    98,
    -216,  -216,  -216,  -216,   -61,   -61,   -43,   -43,    88,    88,
      88,    88,    26,    26,   119,    83,    84,    90,   166,   -51,
     404,   172,   404,   509,   509,   304,   201,   509,   179,  -216,
    -216,   180,  -216,  -216,  -216,  -216,  -216,  -216,   668,   258,
     509,   193,  -216,   194,   509,   195,   195,  -216,    -4,  -216,
    -216,  -216,   367,  -216,   509,  -216,   509,  -216,   404,  -216,
     122,   127,   509,   182,   200,   141,  -216,  -216,  -216,  -216,
    -216,   202,  -216,  -216,   223,     9,  -216,  -216,  -216,  -216,
     404,   404,   183,   509,   509,   404,  -216,  -216,    91,  -216,
     261,  -216,   509,   210,   144,  -216,  -216,   404,   253,   509,
     232,  -216,   404,   256,  -216,  -216,   404,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   124,   125,   126,
     127,   119,   203,   130,    89,    89,   110,    89,    89,     0,
     200,   202,   117,     0,   140,     0,    82,    90,    92,     0,
     129,    88,    84,    85,    86,    87,     1,   201,     0,   147,
     145,   139,    81,   130,     0,   207,   130,     0,   205,   131,
     130,   128,   122,     0,   120,   146,   148,    91,    92,     2,
       3,     4,     5,     6,     0,     0,     0,     0,   164,    27,
      28,    29,    30,    31,    32,     8,    21,    33,     0,    35,
      39,    42,    45,    50,    53,    55,    57,    59,    61,    63,
      65,   158,    93,   181,   204,   208,     0,   144,   140,     0,
       0,   115,     0,    22,    23,     0,    25,    78,     0,   114,
     157,   114,     0,     0,     0,     0,     0,   163,     0,   166,
       0,    13,    14,    18,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    67,     0,    33,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,   188,     0,     0,     0,     0,
     188,   187,   184,   185,   170,   171,     0,   180,   182,   172,
       0,   173,   174,   175,   132,   155,   130,     0,     0,   149,
     151,   143,   140,   142,   139,    80,   123,   116,   121,     0,
       0,     7,     0,   113,   111,   112,     0,   169,     0,   164,
     159,   161,   165,   167,    12,     0,    17,    19,    11,     0,
      66,    36,    37,    38,    40,    41,    43,    44,    48,    49,
      46,    47,    51,    52,    54,    56,    58,    60,    62,     0,
     188,     0,   188,     0,     0,   188,     0,     0,     0,   197,
     198,     0,   179,   183,   186,   153,   138,   137,     0,     0,
       0,    28,   141,     0,     0,     0,    26,    79,   164,    34,
     168,   160,     0,    10,     0,     9,     0,   176,   188,   178,
       0,     0,   188,     0,     0,     0,   196,   199,   150,   152,
     156,     0,   136,   133,     0,     0,   162,    20,    64,   177,
     188,   188,     0,   188,     0,   188,   134,   135,   164,    15,
     189,   191,   188,     0,     0,   192,    16,   188,     0,   188,
       0,   190,   188,     0,   193,   195,   188,   194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,  -216,   -42,  -216,   -79,   -49,    20,
      12,    63,   161,   199,   162,   203,   189,  -216,  -104,   -52,
    -216,   -76,  -112,   -35,  -216,     0,   158,  -216,   275,  -216,
     -58,    94,   209,  -216,  -216,  -216,   221,    19,  -216,   -17,
    -216,  -216,  -100,  -216,  -216,   282,   225,  -216,  -216,    86,
    -216,   -22,  -119,    89,  -215,  -216,  -216,   229,  -120,  -216,
     318,  -216,  -216,   196,  -216,  -149,  -216,  -216,  -216,  -216,
     351,  -216,  -216,  -216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    85,    86,   225,   226,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   117,
     147,   181,   206,    22,    35,    56,    42,    36,    37,    24,
      25,   120,   214,    26,    33,    63,    64,    27,    28,    68,
      39,    61,    50,   273,   197,    40,    51,   198,   199,   200,
     201,   122,   102,   125,   126,   127,   128,   129,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    29,
      30,    31,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   118,   101,    55,   282,   205,    38,   221,   203,   149,
      62,   167,   218,    34,    59,  -118,   212,   150,   151,   119,
     205,   152,   -83,   105,    41,    41,   107,    41,    41,    23,
     108,   261,   113,   114,   116,   286,   118,   153,   154,   118,
     157,   158,   123,   106,   124,    32,   148,  -154,   110,  -154,
     222,    52,   111,    49,   119,   256,    48,   119,   251,   229,
      34,   119,   123,   119,   124,   219,   205,   148,   182,   220,
      66,   231,   232,   233,   101,    60,   318,   168,   207,    62,
     319,   227,   148,    17,    18,    19,   130,   131,   132,   123,
     209,   124,   249,   210,   281,   230,   121,    53,   159,   160,
     155,   156,   270,   282,   234,   235,   293,   196,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,    34,    49,   148,   103,
     287,   121,   289,   202,   121,   161,   162,   279,   121,   274,
     121,   109,   133,   312,   134,   211,   135,   212,    17,    18,
      19,   272,   182,    54,    17,    18,    19,   123,   163,   124,
     277,   164,   326,   306,   323,   212,   165,   285,   309,   238,
     239,   240,   241,   328,   148,   236,   237,   290,   291,   265,
     333,   295,   308,    43,   166,    44,    45,   310,   194,   212,
     320,   321,   311,   216,   212,   325,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   315,   331,   212,   330,
     217,   212,   335,   213,   224,   213,   337,   228,   301,   250,
     292,    49,   304,    66,   242,   243,   252,   253,   254,   255,
     101,   257,   307,   258,   259,   260,   212,   264,   324,   262,
     266,   268,   267,   275,   148,   169,    70,    71,    72,    73,
     146,    74,    75,    76,   269,   276,   283,   280,   288,   284,
     294,   300,   302,   303,   314,   278,   296,   297,   196,   313,
     322,   316,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   317,    21,   170,   171,   172,   329,   173,   174,
     175,   176,   177,   178,   179,   180,    77,    69,    70,    71,
      72,    73,   103,    74,    75,    76,   327,    79,   332,   334,
      80,   336,    81,    82,   244,    83,    84,   246,    67,  -188,
     215,   208,    65,   204,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   299,    21,   248,   223,    69,    70,
      71,    72,    73,   245,    74,    75,    76,   305,    77,   247,
      69,    70,    71,    72,    73,   104,    74,    75,    76,    79,
      47,     0,    80,   263,    81,    82,     0,    83,    84,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,    21,   169,    70,    71,
      72,    73,     0,    74,    75,    76,     0,     0,     0,    77,
      69,    70,    71,    72,    73,     0,    74,    75,    76,     0,
      79,    77,     0,    80,     0,    81,    82,    78,    83,    84,
       0,     0,    79,     0,     0,    80,     0,    81,    82,     0,
      83,    84,     0,     0,     0,     0,   170,   171,   172,     0,
     173,   174,   175,   176,   177,   178,   179,   180,    77,    69,
      70,    71,    72,    73,   103,    74,    75,    76,     0,    79,
       0,   112,    80,     0,    81,    82,     0,    83,    84,     0,
       0,     0,    79,     0,     0,    80,     0,    81,    82,     0,
      83,    84,    69,    70,    71,    72,    73,     0,    74,    75,
      76,     0,    69,    70,    71,    72,    73,     0,    74,    75,
      76,     0,     0,     0,     0,    69,    70,    71,    72,    73,
      77,    74,    75,    76,     0,     0,   278,     0,     0,     0,
       0,    79,     0,     0,    80,     0,    81,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    79,     0,     0,    80,    46,    81,
      82,     0,    83,    84,    79,     0,    77,    80,     0,    81,
      82,     0,    83,    84,     0,     0,     0,    79,     0,     0,
     271,     0,    81,    82,   195,    83,    84,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,    21,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,    21,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    21,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,    21,  -206,     0,     0,     0,    54,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   298,    21,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    77,    54,    38,   219,   109,    23,   126,   108,    88,
       3,    19,   124,    78,     3,    70,    67,    78,    79,    77,
     124,    82,    87,    58,    24,    25,    64,    27,    28,    29,
      68,   180,    74,    75,    76,    86,   112,    80,    81,   115,
      14,    15,    66,    60,    68,     3,    88,    65,    67,    67,
      74,    87,    71,    34,   112,   175,    70,   115,   170,   135,
      78,   119,    66,   121,    68,    67,   170,   109,   103,    71,
      51,   150,   151,   152,   126,    64,    67,    85,    71,     3,
      71,   133,   124,    46,    47,    48,     8,     9,    10,    66,
     112,    68,   168,   115,    71,   147,    77,    67,    72,    73,
      12,    13,   202,   318,   153,   154,   255,   107,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,    78,   108,   170,    70,
     250,   112,   252,    31,   115,    16,    17,   216,   119,    31,
     121,    74,    64,   292,    66,    65,    68,    67,    46,    47,
      48,   203,   187,    74,    46,    47,    48,    66,    75,    68,
     212,    77,    71,   282,   313,    67,    76,    69,   288,   157,
     158,   159,   160,   322,   216,   155,   156,   253,   254,   196,
     329,   257,   286,    25,    18,    27,    28,    65,    65,    67,
     310,   311,    65,    65,    67,   315,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    65,   327,    67,    65,
       3,    67,   332,   119,     3,   121,   336,     3,   270,    86,
     255,   202,   274,   204,   161,   162,    86,    64,    64,    64,
     282,    64,   284,     3,    87,    87,    67,    87,   314,    71,
      65,    67,    65,    65,   286,     3,     4,     5,     6,     7,
      74,     9,    10,    11,    67,    65,    65,    69,    86,    67,
      59,     3,    69,    69,    64,    70,    87,    87,   268,    87,
      87,    69,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    69,    51,    52,    53,    54,    87,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,     5,
       6,     7,    70,     9,    10,    11,    55,    75,    65,    87,
      78,    65,    80,    81,   163,    83,    84,   165,    53,    87,
     121,   110,    50,   108,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   268,    51,   167,   128,     3,     4,
       5,     6,     7,   164,     9,    10,    11,   278,    64,   166,
       3,     4,     5,     6,     7,    57,     9,    10,    11,    75,
      29,    -1,    78,   187,    80,    81,    -1,    83,    84,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    51,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    64,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      75,    64,    -1,    78,    -1,    80,    81,    70,    83,    84,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    81,    -1,
      83,    84,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,     5,     6,     7,    70,     9,    10,    11,    -1,    75,
      -1,    64,    78,    -1,    80,    81,    -1,    83,    84,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    81,    -1,
      83,    84,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      64,     9,    10,    11,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    80,    81,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    75,    -1,    -1,    78,     0,    80,
      81,    -1,    83,    84,    75,    -1,    64,    78,    -1,    80,
      81,    -1,    83,    84,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    80,    81,     3,    83,    84,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    70,    -1,    -1,    -1,    74,    30,    31,
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
      49,    51,   111,   113,   117,   118,   121,   125,   126,   157,
     158,   159,     3,   122,    78,   112,   115,   116,   127,   128,
     133,   113,   114,   114,   114,   114,     0,   158,    70,   125,
     130,   134,    87,    67,    74,   111,   113,   160,   161,     3,
      64,   129,     3,   123,   124,   133,   125,   116,   127,     3,
       4,     5,     6,     7,     9,    10,    11,    64,    70,    75,
      78,    80,    81,    83,    84,    89,    90,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   140,    70,   148,   111,   127,    64,    68,    74,
      67,    71,    64,    93,    93,    64,    93,   107,   109,   118,
     119,   125,   139,    66,    68,   141,   142,   143,   144,   145,
       8,     9,    10,    64,    66,    68,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    74,   108,    93,    95,
      78,    79,    82,    80,    81,    12,    13,    14,    15,    72,
      73,    16,    17,    75,    77,    76,    18,    19,    85,     3,
      52,    53,    54,    56,    57,    58,    59,    60,    61,    62,
      63,   109,   111,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    65,     3,   113,   132,   135,   136,
     137,   138,    31,   130,   134,   106,   110,    71,   124,   139,
     139,    65,    67,   119,   120,   120,    65,     3,   110,    67,
      71,   140,    74,   145,     3,    91,    92,   107,     3,   109,
     107,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   101,   102,   103,   104,   109,
      86,   110,    86,    64,    64,    64,   146,    64,     3,    87,
      87,   153,    71,   151,    87,   127,    65,    65,    67,    67,
     130,    78,   107,   131,    31,    65,    65,   107,    70,    95,
      69,    71,   142,    65,    67,    69,    86,   146,    86,   146,
     109,   109,   111,   153,    59,   109,    87,    87,    50,   137,
       3,   107,    69,    69,   107,   141,   140,   107,   106,   146,
      65,    65,   153,    87,    64,    65,    69,    69,    67,    71,
     146,   146,    87,   153,   109,   146,    71,    55,   153,    87,
      65,   146,    65,   153,    87,   146,    65,   146
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    99,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   111,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   126,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   140,   140,
     140,   141,   141,   142,   142,   143,   144,   144,   145,   145,
     146,   146,   146,   146,   146,   146,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   152,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   156,   156,   156,   156,
     157,   157,   158,   158,   159,   160,   160,   161,   161
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     0,     2,     2,     2,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       0,     1,     3,     5,     6,     6,     5,     4,     4,     1,
       0,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     2,     4,     1,     0,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     3,
       1,     0,     1,     2,     1,     1,     2,     1,     0,     5,
       7,     5,     5,     7,     9,     8,     3,     2,     2,     3,
       1,     2,     1,     1,     4,     1,     0,     1,     2
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
#line 115 "ass4.y"
                                {myprintf("primary_expression => IDENTIFIER\t");printf("(IDENTIFIER = %s\n)",(yyvsp[0].idval));}
#line 1810 "y.tab.c"
    break;

  case 3: /* primary_expression: INT_CONSTANT  */
#line 117 "ass4.y"
                                {myprintf("primary_expression => INT_CONSTANT\t");printf("(INT_CONSTANT = %d\n)",(yyvsp[0].intval));}
#line 1816 "y.tab.c"
    break;

  case 4: /* primary_expression: FLOAT_CONSTANT  */
#line 119 "ass4.y"
                                {myprintf("primary_expression => FLOAT_CONSTANT\t");printf("(FLOAT_CONSTANT = %f\n)",(yyvsp[0].floatval));}
#line 1822 "y.tab.c"
    break;

  case 5: /* primary_expression: CHAR_CONSTANT  */
#line 121 "ass4.y"
                                {myprintf("primary_expression => CHAR_CONSTANT\t");printf("(CHAR_CONSTANT = %s)",(yyvsp[0].charval));}
#line 1828 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 123 "ass4.y"
                                {myprintf("primary_expression => STRING_LITERAL\t");printf("(STRING_LITERAL = %s)",(yyvsp[0].strval));}
#line 1834 "y.tab.c"
    break;

  case 7: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARANTHESES  */
#line 125 "ass4.y"
                                {myprintf("primary_expression => ( expression )");}
#line 1840 "y.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 130 "ass4.y"
                                {myprintf("postfix_expression => primary_expression");}
#line 1846 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 132 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression [ expression ]");}
#line 1852 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARANTHESES  */
#line 134 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression ( argument_expression_list_opt )");}
#line 1858 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 136 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression . IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 1864 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 138 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression -> IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 1870 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression INCREMENT  */
#line 140 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression ++");}
#line 1876 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DECREMENT  */
#line 142 "ass4.y"
                                {myprintf("postfix_expression => postfix_expression --");}
#line 1882 "y.tab.c"
    break;

  case 15: /* postfix_expression: LEFT_PARENTHESES typename RIGHT_PARANTHESES LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE  */
#line 144 "ass4.y"
                                {myprintf("postfix_expression => ( typename ) { initializer_list }");}
#line 1888 "y.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_PARENTHESES typename RIGHT_PARANTHESES LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  */
#line 146 "ass4.y"
                                {myprintf("postfix_expression => ( typename ) { initializer_list , }");}
#line 1894 "y.tab.c"
    break;

  case 17: /* argument_expression_list_opt: argument_expression_list  */
#line 151 "ass4.y"
                                {myprintf("argument_expression_list_opt => argument_expression_list");}
#line 1900 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 153 "ass4.y"
                                {myprintf("argument_expression_list_opt => epsilon");}
#line 1906 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 158 "ass4.y"
                                {myprintf("argument_expression_list => assignment_expression");}
#line 1912 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 160 "ass4.y"
                                {myprintf("argument_expression_list => argument_expression_list , assignment_expression");}
#line 1918 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 165 "ass4.y"
                                {myprintf("unary_expression => postfix_expression");}
#line 1924 "y.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 167 "ass4.y"
                                {myprintf("unary_expression => ++ unary_expression");}
#line 1930 "y.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 169 "ass4.y"
                                {myprintf("unary_expression => -- unary_expression");}
#line 1936 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 171 "ass4.y"
                                {myprintf("unary_expression => unary_operator cast_expression");}
#line 1942 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 173 "ass4.y"
                                {myprintf("unary_expression => sizeof unary_expression");}
#line 1948 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF LEFT_PARENTHESES typename RIGHT_PARANTHESES  */
#line 175 "ass4.y"
                                {myprintf("unary_expression => sizeof ( typename )");}
#line 1954 "y.tab.c"
    break;

  case 27: /* unary_operator: BITWISE_AND  */
#line 180 "ass4.y"
                                {myprintf("unary_operator => &");}
#line 1960 "y.tab.c"
    break;

  case 28: /* unary_operator: ASTERISK  */
#line 182 "ass4.y"
                                {myprintf("unary_operator => *");}
#line 1966 "y.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 184 "ass4.y"
                                {myprintf("unary_operator => +");}
#line 1972 "y.tab.c"
    break;

  case 30: /* unary_operator: MINUS  */
#line 186 "ass4.y"
                                {myprintf("unary_operator => -");}
#line 1978 "y.tab.c"
    break;

  case 31: /* unary_operator: TILDE  */
#line 188 "ass4.y"
                                {myprintf("unary_operator => ~");}
#line 1984 "y.tab.c"
    break;

  case 32: /* unary_operator: EXCLAMATORY_MARK  */
#line 190 "ass4.y"
                                {myprintf("unary_operator => !");}
#line 1990 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 195 "ass4.y"
                                {myprintf("cast_expression => unary_expression");}
#line 1996 "y.tab.c"
    break;

  case 34: /* cast_expression: LEFT_PARENTHESES typename RIGHT_PARANTHESES cast_expression  */
#line 197 "ass4.y"
                                {myprintf("cast_expression => ( typename ) cast_expression");}
#line 2002 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 202 "ass4.y"
                                {myprintf("multiplicative_expression => cast_expression");}
#line 2008 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 204 "ass4.y"
                                {myprintf("multiplicative_expression => multiplicative_expression * cast_expression");}
#line 2014 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression FORWARD_SLASH cast_expression  */
#line 206 "ass4.y"
                                {myprintf("multiplicative_expression => multiplicative_expression / cast_expression");}
#line 2020 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 208 "ass4.y"
                                {myprintf("multiplicative_expression => multiplicative_expression % cast_expression");}
#line 2026 "y.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 213 "ass4.y"
                                {myprintf("additive_expression => multiplicative_expression");}
#line 2032 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 215 "ass4.y"
                                {myprintf("additive_expression => additive_expression + multiplicative_expression");}
#line 2038 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 217 "ass4.y"
                                {myprintf("additive_expression => additive_expression - multiplicative_expression");}
#line 2044 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 222 "ass4.y"
                                {myprintf("shift_expression => additive_expression");}
#line 2050 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 224 "ass4.y"
                                {myprintf("shift_expression => shift_expression << additive_expression");}
#line 2056 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 226 "ass4.y"
                                {myprintf("shift_expression => shift_expression >> additive_expression");}
#line 2062 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 231 "ass4.y"
                                {myprintf("relational_expression => shift_expression");}
#line 2068 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 233 "ass4.y"
                                {myprintf("relational_expression => relational_expression < shift_expression");}
#line 2074 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 235 "ass4.y"
                                {myprintf("relational_expression => relational_expression > shift_expression");}
#line 2080 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 237 "ass4.y"
                                {myprintf("relational_expression => relational_expression <= shift_expression");}
#line 2086 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 239 "ass4.y"
                                {myprintf("relational_expression => relational_expression >= shift_expression");}
#line 2092 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 244 "ass4.y"
                                {myprintf("equality_expression => relational_expression");}
#line 2098 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression ISEQUAL relational_expression  */
#line 246 "ass4.y"
                                {myprintf("equality_expression => equality_expression == relational_expression");}
#line 2104 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 248 "ass4.y"
                                {myprintf("equality_expression => equality_expression != relational_expression");}
#line 2110 "y.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 253 "ass4.y"
                                {myprintf("AND_expression => equality_expression");}
#line 2116 "y.tab.c"
    break;

  case 54: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 255 "ass4.y"
                                {myprintf("AND_expression => AND_expression & equality_expression");}
#line 2122 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 260 "ass4.y"
                                {myprintf("exclusive_OR_expression => AND_expression");}
#line 2128 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 262 "ass4.y"
                                {myprintf("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression");}
#line 2134 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 267 "ass4.y"
                                {myprintf("inclusive_OR_expression => exclusive_OR_expression");}
#line 2140 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 269 "ass4.y"
                                {myprintf("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression");}
#line 2146 "y.tab.c"
    break;

  case 59: /* logical_AND_expression: inclusive_OR_expression  */
#line 274 "ass4.y"
                                {myprintf("logical_AND_expression => inclusive_OR_expression");}
#line 2152 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: logical_AND_expression LOGICAL_AND inclusive_OR_expression  */
#line 276 "ass4.y"
                                {myprintf("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");}
#line 2158 "y.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_AND_expression  */
#line 281 "ass4.y"
                                {myprintf("logical_OR_expression => logical_AND_expression");}
#line 2164 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_OR_expression LOGICAL_OR logical_AND_expression  */
#line 283 "ass4.y"
                                {myprintf("logical_OR_expression => logical_OR_expression || logical_AND_expression");}
#line 2170 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression  */
#line 288 "ass4.y"
                                {myprintf("conditional_expression => logical_OR_expression");}
#line 2176 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression QUESTION_MARK expression COLON conditional_expression  */
#line 290 "ass4.y"
                                {myprintf("conditional_expression => logical_OR_expression ? expression : conditional_expression");}
#line 2182 "y.tab.c"
    break;

  case 65: /* assignment_expression: conditional_expression  */
#line 295 "ass4.y"
                                {myprintf("assignment_expression => conditional_expression");}
#line 2188 "y.tab.c"
    break;

  case 66: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 297 "ass4.y"
                                {myprintf("assignment_expression => unary_expression assignment_operator assignment_expression");}
#line 2194 "y.tab.c"
    break;

  case 67: /* assignment_operator: EQUAL_TO  */
#line 302 "ass4.y"
                                {myprintf("assignment_operator => =");}
#line 2200 "y.tab.c"
    break;

  case 68: /* assignment_operator: MUL_ASSIGN  */
#line 304 "ass4.y"
                                {myprintf("assignment_operator => *=");}
#line 2206 "y.tab.c"
    break;

  case 69: /* assignment_operator: DIV_ASSIGN  */
#line 306 "ass4.y"
                                {myprintf("assignment_operator => /=");}
#line 2212 "y.tab.c"
    break;

  case 70: /* assignment_operator: MOD_ASSIGN  */
#line 308 "ass4.y"
                                {myprintf("assignment_operator => %=");}
#line 2218 "y.tab.c"
    break;

  case 71: /* assignment_operator: ADD_ASSIGN  */
#line 310 "ass4.y"
                                {myprintf("assignment_operator => +=");}
#line 2224 "y.tab.c"
    break;

  case 72: /* assignment_operator: SUB_ASSIGN  */
#line 312 "ass4.y"
                                {myprintf("assignment_operator => -=");}
#line 2230 "y.tab.c"
    break;

  case 73: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 314 "ass4.y"
                                {myprintf("assignment_operator => <<=");}
#line 2236 "y.tab.c"
    break;

  case 74: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 316 "ass4.y"
                                {myprintf("assignment_operator => >>=");}
#line 2242 "y.tab.c"
    break;

  case 75: /* assignment_operator: AND_ASSIGN  */
#line 318 "ass4.y"
                                {myprintf("assignment_operator => &=");}
#line 2248 "y.tab.c"
    break;

  case 76: /* assignment_operator: XOR_ASSIGN  */
#line 320 "ass4.y"
                                {myprintf("assignment_operator => ^=");}
#line 2254 "y.tab.c"
    break;

  case 77: /* assignment_operator: OR_ASSIGN  */
#line 322 "ass4.y"
                                {myprintf("assignment_operator => |=");}
#line 2260 "y.tab.c"
    break;

  case 78: /* expression: assignment_expression  */
#line 327 "ass4.y"
                                {myprintf("expression => assignment_expression");}
#line 2266 "y.tab.c"
    break;

  case 79: /* expression: expression COMMA assignment_expression  */
#line 329 "ass4.y"
                                {myprintf("expression => expression , assignment_expression");}
#line 2272 "y.tab.c"
    break;

  case 80: /* constant_expression: conditional_expression  */
#line 334 "ass4.y"
                                {myprintf("constant_expression => conditional_expression");}
#line 2278 "y.tab.c"
    break;

  case 81: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 339 "ass4.y"
                                {myprintf("declaration => declaration_specifiers init_declarator_list_opt ;");}
#line 2284 "y.tab.c"
    break;

  case 82: /* init_declarator_list_opt: init_declarator_list  */
#line 344 "ass4.y"
                                {myprintf("init_declarator_list_opt => init_declarator_list");}
#line 2290 "y.tab.c"
    break;

  case 83: /* init_declarator_list_opt: %empty  */
#line 346 "ass4.y"
                                {myprintf("init_declarator_list_opt => epsilon");}
#line 2296 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 351 "ass4.y"
                                {myprintf("declaration_specifiers => storage_class_specifier declaration_specifiers_opt");}
#line 2302 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 353 "ass4.y"
                                {myprintf("declaration_specifiers => type_specifier declaration_specifiers_opt ");}
#line 2308 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 355 "ass4.y"
                                {myprintf("declaration_specifiers => type_qualifier declaration_specifiers_opt");}
#line 2314 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 357 "ass4.y"
                                {myprintf("declaration_specifiers => function_specifier declaration_specifiers_opt");}
#line 2320 "y.tab.c"
    break;

  case 88: /* declaration_specifiers_opt: declaration_specifiers  */
#line 362 "ass4.y"
                                {myprintf("declaration_specifiers_opt => declaration_specifiers");}
#line 2326 "y.tab.c"
    break;

  case 89: /* declaration_specifiers_opt: %empty  */
#line 364 "ass4.y"
                                {myprintf("declaration_specifiers_opt => epsilon");}
#line 2332 "y.tab.c"
    break;

  case 90: /* init_declarator_list: init_declarator  */
#line 369 "ass4.y"
                                {myprintf("init_declarator_list => init_declarator");}
#line 2338 "y.tab.c"
    break;

  case 91: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 371 "ass4.y"
                                {myprintf("init_declarator_list => init_declarator_list , init_declarator");}
#line 2344 "y.tab.c"
    break;

  case 92: /* init_declarator: declarator  */
#line 376 "ass4.y"
                                {myprintf("init_declarator => declarator");}
#line 2350 "y.tab.c"
    break;

  case 93: /* init_declarator: declarator EQUAL_TO initializer  */
#line 378 "ass4.y"
                                {myprintf("init_declarator => declarator = initializer");}
#line 2356 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: EXTERN  */
#line 383 "ass4.y"
                                {myprintf("storage_class_specifier => extern");}
#line 2362 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: STATIC  */
#line 385 "ass4.y"
                                {myprintf("storage_class_specifier => static");}
#line 2368 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: AUTO  */
#line 387 "ass4.y"
                                {myprintf("storage_class_specifier => auto");}
#line 2374 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: REGISTER  */
#line 389 "ass4.y"
                                {myprintf("storage_class_specifier => register");}
#line 2380 "y.tab.c"
    break;

  case 98: /* type_specifier: VOID  */
#line 394 "ass4.y"
                                {myprintf("type_specifier => void");}
#line 2386 "y.tab.c"
    break;

  case 99: /* type_specifier: CHAR  */
#line 396 "ass4.y"
                                {myprintf("type_specifier => char");}
#line 2392 "y.tab.c"
    break;

  case 100: /* type_specifier: SHORT  */
#line 398 "ass4.y"
                                {myprintf("type_specifier => short");}
#line 2398 "y.tab.c"
    break;

  case 101: /* type_specifier: INT  */
#line 400 "ass4.y"
                                {myprintf("type_specifier => int");}
#line 2404 "y.tab.c"
    break;

  case 102: /* type_specifier: LONG  */
#line 402 "ass4.y"
                                {myprintf("type_specifier => long");}
#line 2410 "y.tab.c"
    break;

  case 103: /* type_specifier: FLOAT  */
#line 404 "ass4.y"
                                {myprintf("type_specifier => float");}
#line 2416 "y.tab.c"
    break;

  case 104: /* type_specifier: DOUBLE  */
#line 406 "ass4.y"
                                {myprintf("type_specifier => double");}
#line 2422 "y.tab.c"
    break;

  case 105: /* type_specifier: SIGNED  */
#line 408 "ass4.y"
                                {myprintf("type_specifier => signed");}
#line 2428 "y.tab.c"
    break;

  case 106: /* type_specifier: UNSIGNED  */
#line 410 "ass4.y"
                                {myprintf("type_specifier => unsigned");}
#line 2434 "y.tab.c"
    break;

  case 107: /* type_specifier: BOOL  */
#line 412 "ass4.y"
                                {myprintf("type_specifier => _Bool");}
#line 2440 "y.tab.c"
    break;

  case 108: /* type_specifier: COMPLEX  */
#line 414 "ass4.y"
                                {myprintf("type_specifier => _Complex");}
#line 2446 "y.tab.c"
    break;

  case 109: /* type_specifier: IMAGINARY  */
#line 416 "ass4.y"
                                {myprintf("type_specifier => _Imaginary");}
#line 2452 "y.tab.c"
    break;

  case 110: /* type_specifier: enum_specifier  */
#line 418 "ass4.y"
                                {myprintf("type_specifier => enum_specifier");}
#line 2458 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 423 "ass4.y"
                                {myprintf("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt");}
#line 2464 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 425 "ass4.y"
                                {myprintf("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt");}
#line 2470 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 430 "ass4.y"
                                {myprintf("specifier_qualifier_list_opt => specifier_qualifier_list");}
#line 2476 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list_opt: %empty  */
#line 432 "ass4.y"
                                {myprintf("specifier_qualifier_list_opt => epsilon");}
#line 2482 "y.tab.c"
    break;

  case 115: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE  */
#line 443 "ass4.y"
                                                {myprintf("enum_specifier => enum identifier_opt { enumerator_list }");}
#line 2488 "y.tab.c"
    break;

  case 116: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  */
#line 445 "ass4.y"
                                                {myprintf("enum_specifier => enum identifier_opt { enumerator_list , }");}
#line 2494 "y.tab.c"
    break;

  case 117: /* enum_specifier: ENUM IDENTIFIER  */
#line 447 "ass4.y"
                                                {myprintf("enum_specifier => enum IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2500 "y.tab.c"
    break;

  case 118: /* identifier_opt: IDENTIFIER  */
#line 452 "ass4.y"
                                {myprintf("identifier_opt => IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2506 "y.tab.c"
    break;

  case 119: /* identifier_opt: %empty  */
#line 454 "ass4.y"
                                {myprintf("identifier_opt => epsilon");}
#line 2512 "y.tab.c"
    break;

  case 120: /* enumerator_list: enumerator  */
#line 459 "ass4.y"
                                {myprintf("enumerator_list => enumerator");}
#line 2518 "y.tab.c"
    break;

  case 121: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 461 "ass4.y"
                                {myprintf("enumerator_list => enumerator_list , enumerator");}
#line 2524 "y.tab.c"
    break;

  case 122: /* enumerator: IDENTIFIER  */
#line 466 "ass4.y"
                                {myprintf("enumerator => IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2530 "y.tab.c"
    break;

  case 123: /* enumerator: IDENTIFIER EQUAL_TO constant_expression  */
#line 468 "ass4.y"
                                {myprintf("enumerator => IDENTIFIER = constant_expression\t");printf("(IDENTIFIER = %s)",(yyvsp[-2].idval));}
#line 2536 "y.tab.c"
    break;

  case 124: /* type_qualifier: CONST  */
#line 473 "ass4.y"
                                {myprintf("type_qualifier => const");}
#line 2542 "y.tab.c"
    break;

  case 125: /* type_qualifier: RESTRICT  */
#line 475 "ass4.y"
                                {myprintf("type_qualifier => restrict");}
#line 2548 "y.tab.c"
    break;

  case 126: /* type_qualifier: VOLATILE  */
#line 477 "ass4.y"
                                {myprintf("type_qualifier => volatile");}
#line 2554 "y.tab.c"
    break;

  case 127: /* function_specifier: INLINE  */
#line 482 "ass4.y"
                                {myprintf("function_specifier => inline");}
#line 2560 "y.tab.c"
    break;

  case 128: /* declarator: pointer_opt direct_declarator  */
#line 487 "ass4.y"
                                {myprintf("declarator => pointer_opt direct_declarator");}
#line 2566 "y.tab.c"
    break;

  case 129: /* pointer_opt: pointer  */
#line 492 "ass4.y"
                                {myprintf("pointer_opt => pointer");}
#line 2572 "y.tab.c"
    break;

  case 130: /* pointer_opt: %empty  */
#line 494 "ass4.y"
                                {myprintf("pointer_opt => epsilon");}
#line 2578 "y.tab.c"
    break;

  case 131: /* direct_declarator: IDENTIFIER  */
#line 499 "ass4.y"
                                {myprintf("direct_declarator => IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2584 "y.tab.c"
    break;

  case 132: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARANTHESES  */
#line 501 "ass4.y"
                                {myprintf("direct_declarator => ( declarator )");}
#line 2590 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET  */
#line 503 "ass4.y"
                                {myprintf("direct_declarator => direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]");}
#line 2596 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET  */
#line 505 "ass4.y"
                                {myprintf("direct_declarator => direct_declarator [ static type_qualifier_list_opt assignment_expression ]");}
#line 2602 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 507 "ass4.y"
                                {myprintf("direct_declarator =>  direct_declarator [ type_qualifier_list static assignment_expression ]");}
#line 2608 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET  */
#line 509 "ass4.y"
                                {myprintf("direct_declarator => direct_declarator [ type_qualifier_list_opt * ]");}
#line 2614 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_type_list RIGHT_PARANTHESES  */
#line 511 "ass4.y"
                                {myprintf("direct_declarator => direct_declarator ( parameter_type_list )");}
#line 2620 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list_opt RIGHT_PARANTHESES  */
#line 513 "ass4.y"
                                {myprintf("direct_declarator => direct_declarator ( identifier_list_opt )");}
#line 2626 "y.tab.c"
    break;

  case 139: /* type_qualifier_list_opt: type_qualifier_list  */
#line 518 "ass4.y"
                                {myprintf("type_qualifier_list_opt => type_qualifier_list");}
#line 2632 "y.tab.c"
    break;

  case 140: /* type_qualifier_list_opt: %empty  */
#line 520 "ass4.y"
                                {myprintf("type_qualifier_list_opt => epsilon");}
#line 2638 "y.tab.c"
    break;

  case 141: /* assignment_expression_opt: assignment_expression  */
#line 525 "ass4.y"
                                {myprintf("assignment_expression_opt => assignment_expression");}
#line 2644 "y.tab.c"
    break;

  case 142: /* assignment_expression_opt: %empty  */
#line 527 "ass4.y"
                                {myprintf("assignment_expression_opt => epsilon");}
#line 2650 "y.tab.c"
    break;

  case 143: /* identifier_list_opt: identifier_list  */
#line 532 "ass4.y"
                                {myprintf("identifier_list_opt => identifier_list");}
#line 2656 "y.tab.c"
    break;

  case 144: /* identifier_list_opt: %empty  */
#line 534 "ass4.y"
                                {myprintf("identifier_list_opt => epslion");}
#line 2662 "y.tab.c"
    break;

  case 145: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 539 "ass4.y"
                                {myprintf("pointer => * type_qualifier_list_opt");}
#line 2668 "y.tab.c"
    break;

  case 146: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 541 "ass4.y"
                                {myprintf("pointer => * type_qualifier_list_opt pointer");}
#line 2674 "y.tab.c"
    break;

  case 147: /* type_qualifier_list: type_qualifier  */
#line 546 "ass4.y"
                                {myprintf("type_qualifier_list => type_qualifier");}
#line 2680 "y.tab.c"
    break;

  case 148: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 548 "ass4.y"
                                {myprintf("type_qualifier_list => type_qualifier_list type_qualifier");}
#line 2686 "y.tab.c"
    break;

  case 149: /* parameter_type_list: parameter_list  */
#line 553 "ass4.y"
                                {myprintf("parameter_type_list => parameter_list");}
#line 2692 "y.tab.c"
    break;

  case 150: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 555 "ass4.y"
                                {myprintf("parameter_type_list => parameter_list , ...");}
#line 2698 "y.tab.c"
    break;

  case 151: /* parameter_list: parameter_declaration  */
#line 560 "ass4.y"
                                {myprintf("parameter_list => parameter_declaration");}
#line 2704 "y.tab.c"
    break;

  case 152: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 562 "ass4.y"
                                {myprintf("parameter_list => parameter_list , parameter_declaration");}
#line 2710 "y.tab.c"
    break;

  case 153: /* parameter_declaration: declaration_specifiers declarator  */
#line 567 "ass4.y"
                                {myprintf("parameter_declaration => declaration_specifiers declarator");}
#line 2716 "y.tab.c"
    break;

  case 154: /* parameter_declaration: declaration_specifiers  */
#line 569 "ass4.y"
                                {myprintf("parameter_declaration => declaration_specifiers");}
#line 2722 "y.tab.c"
    break;

  case 155: /* identifier_list: IDENTIFIER  */
#line 574 "ass4.y"
                                {myprintf("identifier_list => IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2728 "y.tab.c"
    break;

  case 156: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 576 "ass4.y"
                                {myprintf("identifier_list => identifier_list , IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2734 "y.tab.c"
    break;

  case 157: /* typename: specifier_qualifier_list  */
#line 581 "ass4.y"
                                {myprintf("typename => specifier_qualifier_list");}
#line 2740 "y.tab.c"
    break;

  case 158: /* initializer: assignment_expression  */
#line 586 "ass4.y"
                                {myprintf("initializer => assignment_expression");}
#line 2746 "y.tab.c"
    break;

  case 159: /* initializer: LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE  */
#line 588 "ass4.y"
                                {myprintf("initializer => { initializer_list }");}
#line 2752 "y.tab.c"
    break;

  case 160: /* initializer: LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  */
#line 590 "ass4.y"
                                {myprintf("initializer => { initializer_list , }");}
#line 2758 "y.tab.c"
    break;

  case 161: /* initializer_list: designation_opt initializer  */
#line 595 "ass4.y"
                                {myprintf("initializer_list => designation_opt initializer");}
#line 2764 "y.tab.c"
    break;

  case 162: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 597 "ass4.y"
                                {myprintf("initializer_list => initializer_list , designation_opt initializer");}
#line 2770 "y.tab.c"
    break;

  case 163: /* designation_opt: designation  */
#line 602 "ass4.y"
                                {myprintf("designation_opt => designation");}
#line 2776 "y.tab.c"
    break;

  case 164: /* designation_opt: %empty  */
#line 604 "ass4.y"
                                {myprintf("designation_opt => epsilon");}
#line 2782 "y.tab.c"
    break;

  case 165: /* designation: designator_list EQUAL_TO  */
#line 609 "ass4.y"
                                {myprintf("designation => designator_list =");}
#line 2788 "y.tab.c"
    break;

  case 166: /* designator_list: designator  */
#line 614 "ass4.y"
                                {myprintf("designator_list => designator");}
#line 2794 "y.tab.c"
    break;

  case 167: /* designator_list: designator_list designator  */
#line 616 "ass4.y"
                                {myprintf("designator_list => designator_list designator");}
#line 2800 "y.tab.c"
    break;

  case 168: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 621 "ass4.y"
                                {myprintf("designator => [ constant_expression ]");}
#line 2806 "y.tab.c"
    break;

  case 169: /* designator: DOT IDENTIFIER  */
#line 623 "ass4.y"
                                {myprintf("designator => . IDENTIFIER\t");printf("(IDENTIFIER = %s)",(yyvsp[0].idval));}
#line 2812 "y.tab.c"
    break;

  case 170: /* statement: labeled_statement  */
#line 628 "ass4.y"
                                {myprintf("statement => labeled_statement");}
#line 2818 "y.tab.c"
    break;

  case 171: /* statement: compound_statement  */
#line 630 "ass4.y"
                                {myprintf("statement => compound_statement");}
#line 2824 "y.tab.c"
    break;

  case 172: /* statement: expression_statement  */
#line 632 "ass4.y"
                                {myprintf("statement => expression_statement");}
#line 2830 "y.tab.c"
    break;

  case 173: /* statement: selection_statement  */
#line 634 "ass4.y"
                                {myprintf("statement => selection_statement");}
#line 2836 "y.tab.c"
    break;

  case 174: /* statement: iteration_statement  */
#line 636 "ass4.y"
                                {myprintf("statement => iteration_statement");}
#line 2842 "y.tab.c"
    break;

  case 175: /* statement: jump_statement  */
#line 638 "ass4.y"
                                {myprintf("statement => jump_statement");}
#line 2848 "y.tab.c"
    break;

  case 176: /* labeled_statement: IDENTIFIER COLON statement  */
#line 643 "ass4.y"
                                {myprintf("labeled_statement => IDENTIFIER : statement\t");printf("(IDENTIFIER = %s)",(yyvsp[-2].idval));}
#line 2854 "y.tab.c"
    break;

  case 177: /* labeled_statement: CASE constant_expression COLON statement  */
#line 645 "ass4.y"
                                {myprintf("labeled_statement => case constant_expression : statement");}
#line 2860 "y.tab.c"
    break;

  case 178: /* labeled_statement: DEFAULT COLON statement  */
#line 647 "ass4.y"
                                {myprintf("labeled_statement => default : statement");}
#line 2866 "y.tab.c"
    break;

  case 179: /* compound_statement: LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE  */
#line 651 "ass4.y"
                                {myprintf("compound_statement => { block_item_list_opt }");}
#line 2872 "y.tab.c"
    break;

  case 180: /* block_item_list_opt: block_item_list  */
#line 656 "ass4.y"
                                {myprintf("block_item_list_opt => block_item_list");}
#line 2878 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: %empty  */
#line 658 "ass4.y"
                                {myprintf("block_item_list_opt => epsilon");}
#line 2884 "y.tab.c"
    break;

  case 182: /* block_item_list: block_item  */
#line 663 "ass4.y"
                                {myprintf("block_item_list => block_item");}
#line 2890 "y.tab.c"
    break;

  case 183: /* block_item_list: block_item_list block_item  */
#line 665 "ass4.y"
                                {myprintf("block_item_list => block_item_list block_item");}
#line 2896 "y.tab.c"
    break;

  case 184: /* block_item: declaration  */
#line 670 "ass4.y"
                                {myprintf("block_item => declaration");}
#line 2902 "y.tab.c"
    break;

  case 185: /* block_item: statement  */
#line 672 "ass4.y"
                                {myprintf("block_item => statement");}
#line 2908 "y.tab.c"
    break;

  case 186: /* expression_statement: expression_opt SEMICOLON  */
#line 677 "ass4.y"
                                {myprintf("expression_statement => expression_opt ;");}
#line 2914 "y.tab.c"
    break;

  case 187: /* expression_opt: expression  */
#line 682 "ass4.y"
                                {myprintf("expression_opt => expression");}
#line 2920 "y.tab.c"
    break;

  case 188: /* expression_opt: %empty  */
#line 684 "ass4.y"
                                {myprintf("expression_opt => epsilon");}
#line 2926 "y.tab.c"
    break;

  case 189: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARANTHESES statement  */
#line 689 "ass4.y"
                                {myprintf("selection_statement => if ( expression ) statement");}
#line 2932 "y.tab.c"
    break;

  case 190: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARANTHESES statement ELSE statement  */
#line 691 "ass4.y"
                                {myprintf("selection_statement => if ( expression ) statement else statement");}
#line 2938 "y.tab.c"
    break;

  case 191: /* selection_statement: SWITCH LEFT_PARENTHESES expression RIGHT_PARANTHESES statement  */
#line 693 "ass4.y"
                                {myprintf("selection_statement => switch ( expression ) statement");}
#line 2944 "y.tab.c"
    break;

  case 192: /* iteration_statement: WHILE LEFT_PARENTHESES expression RIGHT_PARANTHESES statement  */
#line 698 "ass4.y"
                                {myprintf("iteration_statement => while ( expression ) statement");}
#line 2950 "y.tab.c"
    break;

  case 193: /* iteration_statement: DO statement WHILE LEFT_PARENTHESES expression RIGHT_PARANTHESES SEMICOLON  */
#line 700 "ass4.y"
                                {myprintf("iteration_statement => do statement while ( expression ) ;");}
#line 2956 "y.tab.c"
    break;

  case 194: /* iteration_statement: FOR LEFT_PARENTHESES expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PARANTHESES statement  */
#line 702 "ass4.y"
                                {myprintf("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement");}
#line 2962 "y.tab.c"
    break;

  case 195: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_opt SEMICOLON expression_opt RIGHT_PARANTHESES statement  */
#line 704 "ass4.y"
                                {myprintf("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement");}
#line 2968 "y.tab.c"
    break;

  case 196: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 709 "ass4.y"
                                {myprintf("jump_statement => goto IDENTIFIER ;\t");printf("(IDENTIFIER = %s)",(yyvsp[-1].idval));}
#line 2974 "y.tab.c"
    break;

  case 197: /* jump_statement: CONTINUE SEMICOLON  */
#line 711 "ass4.y"
                                {myprintf("jump_statement => continue ;");}
#line 2980 "y.tab.c"
    break;

  case 198: /* jump_statement: BREAK SEMICOLON  */
#line 713 "ass4.y"
                                {myprintf("jump_statement => break ;");}
#line 2986 "y.tab.c"
    break;

  case 199: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 715 "ass4.y"
                                {myprintf("jump_statement => return expression_opt ;");}
#line 2992 "y.tab.c"
    break;

  case 200: /* translation_unit: external_declaration  */
#line 720 "ass4.y"
                                {myprintf("translation_unit => external_declaration");}
#line 2998 "y.tab.c"
    break;

  case 201: /* translation_unit: translation_unit external_declaration  */
#line 722 "ass4.y"
                                {myprintf("translation_unit => translation_unit external_declaration");}
#line 3004 "y.tab.c"
    break;

  case 202: /* external_declaration: function_definition  */
#line 727 "ass4.y"
                                {myprintf("external_declaration => function_definition");}
#line 3010 "y.tab.c"
    break;

  case 203: /* external_declaration: declaration  */
#line 729 "ass4.y"
                                {myprintf("external_declaration => declaration");}
#line 3016 "y.tab.c"
    break;

  case 204: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 734 "ass4.y"
                                {myprintf("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement");}
#line 3022 "y.tab.c"
    break;

  case 205: /* declaration_list_opt: declaration_list  */
#line 739 "ass4.y"
                                {myprintf("declaration_list_opt => declaration_list");}
#line 3028 "y.tab.c"
    break;

  case 206: /* declaration_list_opt: %empty  */
#line 741 "ass4.y"
                                {myprintf("declaration_list_opt => epsilon");}
#line 3034 "y.tab.c"
    break;

  case 207: /* declaration_list: declaration  */
#line 746 "ass4.y"
                                {myprintf("declaration_list => declaration");}
#line 3040 "y.tab.c"
    break;

  case 208: /* declaration_list: declaration_list declaration  */
#line 748 "ass4.y"
                                {myprintf("declaration_list => declaration_list declaration");}
#line 3046 "y.tab.c"
    break;


#line 3050 "y.tab.c"

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

#line 750 "ass4.y"


void yyerror(char * s){
	printf("Error in line %d --> %s",lc,s);
	return;
}

void myprintf(char * s){
	printf("%s\n",s);
}
