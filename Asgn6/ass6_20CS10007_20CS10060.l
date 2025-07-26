%{
	
	#include <stdio.h>
	#include <stdlib.h>
	#include "ass6_20CS10060_translator.h"
	#include "y.tab.h"
	int lc = 1;		// line counter
%}
/*abbreviations for the regular expressions*/

ARROW				"->"
INCREMENT			"++"
DECREMENT			"--"
SIZEOF				"sizeof"
LEFT_SHIFT			"<<"
RIGHT_SHIFT			">>"
LESS_EQUAL			"<="
GREATER_EQUAL		">="
ISEQUAL				"=="
NOTEQUAL			"!="
LOGICAL_AND			"&&"
LOGICAL_OR			"||"
MUL_ASSIGN			"*="
DIV_ASSIGN			"/="
MOD_ASSIGN			"%="
ADD_ASSIGN			"+="
SUB_ASSIGN			"-="
LEFT_SHIFT_ASSIGN	"<<="
RIGHT_SHIFT_ASSIGN	">>="
AND_ASSIGN			"&="
XOR_ASSIGN			"^="
OR_ASSIGN			"|="
EXTERN				"extern"
STATIC				"static"
AUTO                "auto" 
REGISTER 			"register"
VOID 				"void"
CHAR 				"char"
SHORT 				"short"
INT 				"int"
LONG 				"long"
FLOAT 				"float"
DOUBLE 				"double"
SIGNED				"signed"
UNSIGNED			"unsigned"
BOOL 				"_Bool"
COMPLEX 			"_Complex"
IMAGINARY 			"_Imaginary"
RESTRICT 			"restrict"		
VOLATILE 			"volatile"
INLINE 				"inline"
ELLIPSIS 			"..."
ENUM 				"enum"
CASE 				"case"
DEFAULT 			"default"
IF 					"if"
ELSE 				"else"
SWITCH 				"switch"
FOR 				"for"
DO 					"do"
WHILE 				"while"
GOTO 				"goto"
CONTINUE 			"continue"		
BREAK 				"break"
RETURN 				"return"
CONST 				"const"
LEFT_PARENTHESES	"("
RIGHT_PARENTHESES 	")"
DOT					"."
COMMA				","
LEFT_SQUARE_BRACKET "["
RIGHT_SQUARE_BRACKET "]"
LEFT_CURLY_BRACE	"{"
RIGHT_CURLY_BRACE	"}"
LESS_THAN			"<"
GREATER_THAN		">"
EQUAL_TO			"="
BITWISE_AND			"&"
BITWISE_OR			"|"
BITWISE_XOR			"^"
ASTERISK			"*"
FORWARD_SLASH		"/"
PLUS				"+"
MINUS				"-"
MODULO				"%"
TILDE				"~"
EXCLAMATORY_MARK	"!"
QUESTION_MARK		"?"
COLON				":"
SEMICOLON			";"

IDENTIFIER				[_a-zA-Z][_a-zA-Z0-9]*

INT_CONSTANT			[0-9]+ 	
FRACTIONAL_CONST	([0-9]*\.[0-9]+)|([0-9]+\.)
EXPONENT_PART		[Ee][+-]?[0-9]+
FLOAT_CONSTANT			({FRACTIONAL_CONST}({EXPONENT_PART})?)|([0-9]+{EXPONENT_PART})	
ESCAPE_SEQUENCE		"\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"\|"\\0"
C_CHAR				([^\n\\\'])|({ESCAPE_SEQUENCE})
CHAR_CONSTANT			\'({C_CHAR})+\'


S_CHAR				([^\n\\\"])|({ESCAPE_SEQUENCE})
STRING_LITERAL		\"({S_CHAR})*\"

%x multiline_comment		

singleline_comment	"//"[^\n]*

WS					[\t ]

NEWLINE				[\n]

ERR					.

%%
{SIZEOF}			{return SIZEOF;}
{EXTERN}			{return EXTERN;}
{STATIC}			{return STATIC;}
{AUTO}				{return AUTO;}
{REGISTER}			{return REGISTER;}
{VOID}				{return VOID;}
{CHAR}				{return CHAR;}
{SHORT}				{return SHORT;}
{INT}				{return INT;}
{LONG}				{return LONG;}
{FLOAT}				{return FLOAT;}
{DOUBLE}			{return DOUBLE;}
{SIGNED}			{return SIGNED;}
{UNSIGNED}			{return UNSIGNED;}
{BOOL}				{return BOOL;}
{COMPLEX}			{return COMPLEX;}
{IMAGINARY}			{return IMAGINARY;}
{RESTRICT}			{return RESTRICT;}
{VOLATILE}			{return VOLATILE;}
{INLINE}			{return INLINE;}
{ENUM}				{return ENUM;}
{CASE}				{return CASE;}
{DEFAULT}			{return DEFAULT;}
{IF}				{return IF;}
{ELSE}				{return ELSE;}
{SWITCH}			{return SWITCH;}
{FOR}				{return FOR;}
{DO}				{return DO;}
{WHILE}				{return WHILE;}
{GOTO}				{return GOTO;}
{CONTINUE}			{return CONTINUE;}
{BREAK}				{return BREAK;}
{RETURN}			{return RETURN;}
{CONST}				{return CONST;}
{LEFT_PARENTHESES}	{return LEFT_PARENTHESES;}
{RIGHT_PARENTHESES}	{return RIGHT_PARENTHESES;}
{DOT}				{return DOT;}
{COMMA}				{return COMMA;}
{LEFT_SQUARE_BRACKET} {return LEFT_SQUARE_BRACKET;}
{RIGHT_SQUARE_BRACKET} {return RIGHT_SQUARE_BRACKET;}
{LEFT_CURLY_BRACE}	{return LEFT_CURLY_BRACE;}
{RIGHT_CURLY_BRACE} {return RIGHT_CURLY_BRACE;}
{LESS_THAN}			{return LESS_THAN;}
{GREATER_THAN}		{return GREATER_THAN;}	
{EQUAL_TO}			{return EQUAL_TO;}
{BITWISE_AND}		{return BITWISE_AND;}	
{BITWISE_OR}			{return BITWISE_OR;}
{BITWISE_XOR}		{return BITWISE_XOR;}	
{ASTERISK}			{return ASTERISK;}	
{FORWARD_SLASH}		{return FORWARD_SLASH;}	
{PLUS}				{return PLUS;}	
{MINUS}				{return MINUS;}			
{MODULO}			{return MODULO;}	
{TILDE}				{return TILDE;}
{EXCLAMATORY_MARK}	{return EXCLAMATORY_MARK;}
{QUESTION_MARK}		{return QUESTION_MARK;}	
{COLON}				{return COLON;}			
{SEMICOLON}			{return SEMICOLON;}	


{IDENTIFIER}		{yylval.idval = currST->lookup(yytext); return IDENTIFIER;/*identifier rule*/}

{INT_CONSTANT}		{yylval.intval = atoi(yytext); return INT_CONSTANT;}
{FLOAT_CONSTANT}	{yylval.floatval = strdup(yytext); return FLOAT_CONSTANT;}
{CHAR_CONSTANT}		{yylval.charval = strdup(yytext); return CHAR_CONSTANT;}
{STRING_LITERAL}	{yylval.strval = strdup(yytext); return STRING_LITERAL;/*string literal rule*/}


{ELLIPSIS}			{return ELLIPSIS;}
{ARROW}				{return ARROW;}
{INCREMENT}			{return INCREMENT;}
{DECREMENT}			{return DECREMENT;}
{LEFT_SHIFT}		{return LEFT_SHIFT;}
{RIGHT_SHIFT}		{return RIGHT_SHIFT;}
{LESS_EQUAL}		{return LESS_EQUAL;}
{GREATER_EQUAL}		{return GREATER_EQUAL;}
{ISEQUAL}			{return ISEQUAL;}
{NOTEQUAL}			{return NOTEQUAL;}
{LOGICAL_AND}		{return LOGICAL_AND;}
{LOGICAL_OR}		{return LOGICAL_OR;}
{MUL_ASSIGN}		{return MUL_ASSIGN;}
{DIV_ASSIGN}		{return DIV_ASSIGN;}
{MOD_ASSIGN}		{return MOD_ASSIGN;}
{ADD_ASSIGN}		{return ADD_ASSIGN;}
{SUB_ASSIGN}		{return SUB_ASSIGN;}
{LEFT_SHIFT_ASSIGN}	{return LEFT_SHIFT_ASSIGN;}
{RIGHT_SHIFT_ASSIGN} {return RIGHT_SHIFT_ASSIGN;}
{AND_ASSIGN}		{return AND_ASSIGN;}
{XOR_ASSIGN}		{return XOR_ASSIGN;}
{OR_ASSIGN}			{return OR_ASSIGN;}


"/*"				BEGIN(multiline_comment);
<multiline_comment>[^\*\n]*		{/*multiline comment ignored*/}
<multiline_comment>\*[^\*\/\n]*	{}
<multiline_comment>[\n]			{lc++;}
<multiline_comment>[\*][\/]		{BEGIN(INITIAL);}

{singleline_comment} {/*single line comment ignored*/}

{WS}				{/*whitespaces ignored*/}

{NEWLINE}			{lc++;}

{ERR}				{printf("Error in line %d\n",lc);}

%%
