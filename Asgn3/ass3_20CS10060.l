%{
	#include "lex_return.h"
	int lc = 1;		// line counter
	/*cleanup stdio.h*/
%}

KEYWORD    			"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

ID					[_a-zA-Z][_a-zA-Z0-9]*

INT_CONST			[1-9][0-9]*		
/*revise case of negative numbers and 0*/
FRACTIONAL_CONST	([0-9]*\.[0-9]+)|([0-9]+\.)
EXPONENT_PART		[Ee][+-]?[0-9]+
FLOAT_CONST			({FRACTIONAL_CONST}({EXPONENT_PART})?)|([0-9]+{EXPONENT_PART})	

ENUM_CONST			{ID}	
/*revise ambiguity issue*/
ESCAPE_SEQUENCE		"\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR				([^\n\\\'])|({ESCAPE_SEQUENCE})
CHAR_CONST			\'({C_CHAR})+\'	
/*accepts multi-character also*/
CONST 				({INT_CONST})|({FLOAT_CONST})|({ENUM_CONST})|({CHAR_CONST})

S_CHAR				([^\n\\\"])|({ESCAPE_SEQUENCE})
STRING_LITERAL		\"({S_CHAR})*\"

PUNC				"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

%x multiline_comment		

singleline_comment	"//"[^\n]*
/*should we match with the last \n*/
WS					[\t ]

NEWLINE				[\n]

ERR					.

%%

{KEYWORD}			{return KEYWORD;}

{ID}				{return ID;}

{CONST}				{return CONST;}

{STRING_LITERAL}	{return STRING_LITERAL;}

{PUNC}				{return PUNC;}

"/*"				BEGIN(multiline_comment);
<multiline_comment>[^\*\n]*		{}
<multiline_comment>\*[^\*\/\n]*	{}
<multiline_comment>[\n]			{lc++;}
<multiline_comment>([^\n]|[\*])+[\/]	{BEGIN(INITIAL);}

{singleline_comment} {}

{WS}				{}

{NEWLINE}			{lc++;}

{ERR}				{return ERR;}

%%