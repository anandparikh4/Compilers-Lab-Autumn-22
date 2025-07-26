%{
    #include <stdio.h>
	extern int lc;
    extern int yylex();
    void yyerror(char * s);
	void myprintf(char * s);
%}

%union{
	int intval;
	char* charval;
	char* strval;
	char* idval;
	float floatval;
}


%token <idval> IDENTIFIER
%token <intval> INT_CONSTANT
%token <floatval> FLOAT_CONSTANT
%token <charval> CHAR_CONSTANT
%token <strval> STRING_LITERAL

%token ARROW
%token INCREMENT
%token DECREMENT
%token SIZEOF
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESS_EQUAL
%token GREATER_EQUAL
%token ISEQUAL
%token NOTEQUAL
%token LOGICAL_AND
%token LOGICAL_OR
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token LEFT_SHIFT_ASSIGN
%token RIGHT_SHIFT_ASSIGN
%token AND_ASSIGN
%token XOR_ASSIGN
%token OR_ASSIGN
%token EXTERN
%token STATIC
%token AUTO 
%token REGISTER
%token VOID 
%token CHAR 
%token SHORT 
%token INT 
%token LONG 
%token FLOAT 
%token DOUBLE 
%token SIGNED 
%token UNSIGNED 
%token BOOL 
%token COMPLEX
%token IMAGINARY
%token CONST 
%token RESTRICT 
%token VOLATILE
%token INLINE 
%token ELLIPSIS
%token ENUM
%token CASE
%token DEFAULT
%token IF
%token ELSE
%token SWITCH
%token FOR
%token DO
%token WHILE
%token GOTO
%token CONTINUE
%token BREAK
%token RETURN
%token LEFT_PARENTHESES
%token RIGHT_PARANTHESES
%token DOT
%token COMMA
%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_CURLY_BRACE
%token RIGHT_CURLY_BRACE
%token LESS_THAN			
%token GREATER_THAN		
%token EQUAL_TO			
%token BITWISE_AND			
%token BITWISE_OR			
%token BITWISE_XOR	
%token ASTERISK			
%token FORWARD_SLASH		
%token PLUS				
%token MINUS				
%token MODULO				
%token TILDE				
%token EXCLAMATORY_MARK	
%token QUESTION_MARK		
%token COLON				
%token SEMICOLON			

%nonassoc RIGHT_PARANTHESES
%nonassoc ELSE
%start translation_unit

%%

// where ever you see any of the 5 ones where you need to print the value, check it

primary_expression:
          IDENTIFIER
				{myprintf("primary_expression => IDENTIFIER\t");printf("(IDENTIFIER = %s\n)",$1);}
        | INT_CONSTANT
				{myprintf("primary_expression => INT_CONSTANT\t");printf("(INT_CONSTANT = %d\n)",$1);}
        | FLOAT_CONSTANT
				{myprintf("primary_expression => FLOAT_CONSTANT\t");printf("(FLOAT_CONSTANT = %f\n)",$1);}
        | CHAR_CONSTANT
				{myprintf("primary_expression => CHAR_CONSTANT\t");printf("(CHAR_CONSTANT = %s)",$1);}
        | STRING_LITERAL
				{myprintf("primary_expression => STRING_LITERAL\t");printf("(STRING_LITERAL = %s)",$1);}
        | LEFT_PARENTHESES expression RIGHT_PARANTHESES
				{myprintf("primary_expression => ( expression )");}
        ;

postfix_expression:
          primary_expression
		  		{myprintf("postfix_expression => primary_expression");}
        | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET
				{myprintf("postfix_expression => postfix_expression [ expression ]");}
        | postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARANTHESES     // optional
				{myprintf("postfix_expression => postfix_expression ( argument_expression_list_opt )");}
        | postfix_expression DOT IDENTIFIER
				{myprintf("postfix_expression => postfix_expression . IDENTIFIER\t");printf("(IDENTIFIER = %s)",$3);}
        | postfix_expression ARROW IDENTIFIER
				{myprintf("postfix_expression => postfix_expression -> IDENTIFIER\t");printf("(IDENTIFIER = %s)",$3);}
        | postfix_expression INCREMENT
				{myprintf("postfix_expression => postfix_expression ++");}
        | postfix_expression DECREMENT
				{myprintf("postfix_expression => postfix_expression --");}
        | LEFT_PARENTHESES typename RIGHT_PARANTHESES LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE
				{myprintf("postfix_expression => ( typename ) { initializer_list }");}
        | LEFT_PARENTHESES typename RIGHT_PARANTHESES LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE
				{myprintf("postfix_expression => ( typename ) { initializer_list , }");}
        ;

argument_expression_list_opt:
		  argument_expression_list
		  		{myprintf("argument_expression_list_opt => argument_expression_list");}
		|
				{myprintf("argument_expression_list_opt => epsilon");}
		;

argument_expression_list:
          assignment_expression
		  		{myprintf("argument_expression_list => assignment_expression");}
        | argument_expression_list COMMA assignment_expression
				{myprintf("argument_expression_list => argument_expression_list , assignment_expression");}
        ;

unary_expression:
          postfix_expression
		  		{myprintf("unary_expression => postfix_expression");}
        | INCREMENT unary_expression
				{myprintf("unary_expression => ++ unary_expression");}
        | DECREMENT unary_expression
				{myprintf("unary_expression => -- unary_expression");}
        | unary_operator cast_expression
				{myprintf("unary_expression => unary_operator cast_expression");}
        | SIZEOF unary_expression
				{myprintf("unary_expression => sizeof unary_expression");}
        | SIZEOF LEFT_PARENTHESES typename RIGHT_PARANTHESES
				{myprintf("unary_expression => sizeof ( typename )");}
        ;
    
unary_operator:
          BITWISE_AND
		  		{myprintf("unary_operator => &");}
        | ASTERISK
				{myprintf("unary_operator => *");}
        | PLUS
				{myprintf("unary_operator => +");}
        | MINUS
				{myprintf("unary_operator => -");}
        | TILDE
				{myprintf("unary_operator => ~");}
        | EXCLAMATORY_MARK
				{myprintf("unary_operator => !");}
        ;

cast_expression:
          unary_expression
		  		{myprintf("cast_expression => unary_expression");}
        | LEFT_PARENTHESES typename RIGHT_PARANTHESES cast_expression
				{myprintf("cast_expression => ( typename ) cast_expression");}
        ;

multiplicative_expression:
          cast_expression
		  		{myprintf("multiplicative_expression => cast_expression");}
        | multiplicative_expression ASTERISK cast_expression
				{myprintf("multiplicative_expression => multiplicative_expression * cast_expression");}
        | multiplicative_expression FORWARD_SLASH cast_expression
				{myprintf("multiplicative_expression => multiplicative_expression / cast_expression");}
        | multiplicative_expression MODULO cast_expression
				{myprintf("multiplicative_expression => multiplicative_expression % cast_expression");}     // CHECK THIS
        ;

additive_expression:
          multiplicative_expression
		  		{myprintf("additive_expression => multiplicative_expression");}
        | additive_expression PLUS multiplicative_expression
		  		{myprintf("additive_expression => additive_expression + multiplicative_expression");}
        | additive_expression MINUS multiplicative_expression
		  		{myprintf("additive_expression => additive_expression - multiplicative_expression");}
        ;
    
shift_expression:
          additive_expression
		  		{myprintf("shift_expression => additive_expression");}
        | shift_expression LEFT_SHIFT additive_expression
				{myprintf("shift_expression => shift_expression << additive_expression");}
        | shift_expression RIGHT_SHIFT additive_expression
				{myprintf("shift_expression => shift_expression >> additive_expression");}
        ;

relational_expression:
          shift_expression 
		  		{myprintf("relational_expression => shift_expression");}
        | relational_expression LESS_THAN shift_expression
				{myprintf("relational_expression => relational_expression < shift_expression");}
        | relational_expression GREATER_THAN shift_expression
				{myprintf("relational_expression => relational_expression > shift_expression");}
        | relational_expression LESS_EQUAL shift_expression	
				{myprintf("relational_expression => relational_expression <= shift_expression");}
        | relational_expression GREATER_EQUAL shift_expression
				{myprintf("relational_expression => relational_expression >= shift_expression");}
        ;
    
equality_expression:
          relational_expression
		  		{myprintf("equality_expression => relational_expression");}
        | equality_expression ISEQUAL relational_expression
				{myprintf("equality_expression => equality_expression == relational_expression");}
        | equality_expression NOTEQUAL relational_expression
				{myprintf("equality_expression => equality_expression != relational_expression");}
        ;

AND_expression:
          equality_expression
		  		{myprintf("AND_expression => equality_expression");}
        | AND_expression BITWISE_AND equality_expression
				{myprintf("AND_expression => AND_expression & equality_expression");}
        ;

exclusive_OR_expression:
          AND_expression
				{myprintf("exclusive_OR_expression => AND_expression");}
        | exclusive_OR_expression BITWISE_XOR AND_expression
				{myprintf("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression");}
        ;

inclusive_OR_expression:
          exclusive_OR_expression
		  		{myprintf("inclusive_OR_expression => exclusive_OR_expression");}
        | inclusive_OR_expression BITWISE_OR exclusive_OR_expression
				{myprintf("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression");}
        ;

logical_AND_expression:
          inclusive_OR_expression
		  		{myprintf("logical_AND_expression => inclusive_OR_expression");}
        | logical_AND_expression LOGICAL_AND inclusive_OR_expression
				{myprintf("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");}
        ;

logical_OR_expression:
          logical_AND_expression
		  		{myprintf("logical_OR_expression => logical_AND_expression");}
        | logical_OR_expression LOGICAL_OR logical_AND_expression
				{myprintf("logical_OR_expression => logical_OR_expression || logical_AND_expression");}
        ;

conditional_expression:
          logical_OR_expression
		  		{myprintf("conditional_expression => logical_OR_expression");}
        | logical_OR_expression QUESTION_MARK expression COLON conditional_expression
				{myprintf("conditional_expression => logical_OR_expression ? expression : conditional_expression");}
        ;

assignment_expression:
          conditional_expression
				{myprintf("assignment_expression => conditional_expression");}
        | unary_expression assignment_operator assignment_expression
				{myprintf("assignment_expression => unary_expression assignment_operator assignment_expression");}
        ;

assignment_operator:
          EQUAL_TO
		  		{myprintf("assignment_operator => =");}
        | MUL_ASSIGN
				{myprintf("assignment_operator => *=");}
        | DIV_ASSIGN
				{myprintf("assignment_operator => /=");}
        | MOD_ASSIGN
				{myprintf("assignment_operator => %=");}
        | ADD_ASSIGN
				{myprintf("assignment_operator => +=");}
        | SUB_ASSIGN
				{myprintf("assignment_operator => -=");}
        | LEFT_SHIFT_ASSIGN
				{myprintf("assignment_operator => <<=");}
        | RIGHT_SHIFT_ASSIGN
				{myprintf("assignment_operator => >>=");}
        | AND_ASSIGN
				{myprintf("assignment_operator => &=");}
        | XOR_ASSIGN
				{myprintf("assignment_operator => ^=");}
        | OR_ASSIGN
				{myprintf("assignment_operator => |=");}
        ;

expression:
          assignment_expression
		  		{myprintf("expression => assignment_expression");}
        | expression COMMA assignment_expression
				{myprintf("expression => expression , assignment_expression");}
        ;

constant_expression:
          conditional_expression
		  		{myprintf("constant_expression => conditional_expression");}
        ;

declaration:
          declaration_specifiers init_declarator_list_opt SEMICOLON    //  optional
		  		{myprintf("declaration => declaration_specifiers init_declarator_list_opt ;");}
        ;

init_declarator_list_opt:
		  init_declarator_list
		  		{myprintf("init_declarator_list_opt => init_declarator_list");}
		|
				{myprintf("init_declarator_list_opt => epsilon");}
		;

declaration_specifiers:
          storage_class_specifier declaration_specifiers_opt            // optional
		  		{myprintf("declaration_specifiers => storage_class_specifier declaration_specifiers_opt");}
        | type_specifier declaration_specifiers_opt                     // optional
				{myprintf("declaration_specifiers => type_specifier declaration_specifiers_opt ");}
        | type_qualifier declaration_specifiers_opt                     // optional
				{myprintf("declaration_specifiers => type_qualifier declaration_specifiers_opt");}
        | function_specifier declaration_specifiers_opt                 // optional
				{myprintf("declaration_specifiers => function_specifier declaration_specifiers_opt");}
        ;

declaration_specifiers_opt:
		  declaration_specifiers
		  		{myprintf("declaration_specifiers_opt => declaration_specifiers");}
		|
				{myprintf("declaration_specifiers_opt => epsilon");}
		;

init_declarator_list:
          init_declarator
		  		{myprintf("init_declarator_list => init_declarator");}
        | init_declarator_list COMMA init_declarator
				{myprintf("init_declarator_list => init_declarator_list , init_declarator");}
        ;

init_declarator:
          declarator 
		  		{myprintf("init_declarator => declarator");}
        | declarator EQUAL_TO initializer 
				{myprintf("init_declarator => declarator = initializer");}
        ;

storage_class_specifier:
          EXTERN
		  		{myprintf("storage_class_specifier => extern");}
        | STATIC
				{myprintf("storage_class_specifier => static");}
        | AUTO 
				{myprintf("storage_class_specifier => auto");}
        | REGISTER
				{myprintf("storage_class_specifier => register");}
        ;

type_specifier:
          VOID 
		  		{myprintf("type_specifier => void");}
        | CHAR 
				{myprintf("type_specifier => char");}
        | SHORT 
				{myprintf("type_specifier => short");}
        | INT 
				{myprintf("type_specifier => int");}
        | LONG 
				{myprintf("type_specifier => long");}
        | FLOAT 
				{myprintf("type_specifier => float");}
        | DOUBLE 
				{myprintf("type_specifier => double");}
        | SIGNED 
				{myprintf("type_specifier => signed");}
        | UNSIGNED 
				{myprintf("type_specifier => unsigned");}
        | BOOL 
				{myprintf("type_specifier => _Bool");}
        | COMPLEX
				{myprintf("type_specifier => _Complex");}
        | IMAGINARY
				{myprintf("type_specifier => _Imaginary");}
        | enum_specifier
				{myprintf("type_specifier => enum_specifier");}
        ;

specifier_qualifier_list:
          type_specifier specifier_qualifier_list_opt    // optional
		  		{myprintf("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt");}
        | type_qualifier specifier_qualifier_list_opt
				{myprintf("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt");}
        ;

specifier_qualifier_list_opt:
		  specifier_qualifier_list
		  		{myprintf("specifier_qualifier_list_opt => specifier_qualifier_list");}
		|
		  		{myprintf("specifier_qualifier_list_opt => epsilon");}
		;

// enum_specifier:
//           ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE   // optional
//         | ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE   // optional
//         | ENUM IDENTIFIER
//         ;

enum_specifier:
                ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE 
						{myprintf("enum_specifier => enum identifier_opt { enumerator_list }");}
                | ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE
						{myprintf("enum_specifier => enum identifier_opt { enumerator_list , }");}
                | ENUM IDENTIFIER
						{myprintf("enum_specifier => enum IDENTIFIER\t");printf("(IDENTIFIER = %s)",$2);}
                ;

identifier_opt:
		  IDENTIFIER
		  		{myprintf("identifier_opt => IDENTIFIER\t");printf("(IDENTIFIER = %s)",$1);}
		|
				{myprintf("identifier_opt => epsilon");}
		;

enumerator_list:
          enumerator
		  		{myprintf("enumerator_list => enumerator");} 
        | enumerator_list COMMA enumerator
				{myprintf("enumerator_list => enumerator_list , enumerator");}
        ;

enumerator:
          IDENTIFIER                               // locho chhe ENUM_CONSTANT ane IDENTIFIER ma
		  		{myprintf("enumerator => IDENTIFIER\t");printf("(IDENTIFIER = %s)",$1);}
        | IDENTIFIER EQUAL_TO constant_expression
				{myprintf("enumerator => IDENTIFIER = constant_expression\t");printf("(IDENTIFIER = %s)",$1);}
        ;

type_qualifier:
          CONST
		  		{myprintf("type_qualifier => const");}
        | RESTRICT
				{myprintf("type_qualifier => restrict");}
        | VOLATILE
				{myprintf("type_qualifier => volatile");}
        ;

function_specifier:
          INLINE 
		  		{myprintf("function_specifier => inline");}
        ;

declarator:
          pointer_opt direct_declarator    // optional
		  		{myprintf("declarator => pointer_opt direct_declarator");}
        ;

pointer_opt:
		  pointer
		  		{myprintf("pointer_opt => pointer");}
		|
				{myprintf("pointer_opt => epsilon");}
		;

direct_declarator:
          IDENTIFIER
		  		{myprintf("direct_declarator => IDENTIFIER\t");printf("(IDENTIFIER = %s)",$1);}
        | LEFT_PARENTHESES declarator RIGHT_PARANTHESES
				{myprintf("direct_declarator => ( declarator )");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET       // optional
				{myprintf("direct_declarator => direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]");}
        | direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET    // optional
				{myprintf("direct_declarator => direct_declarator [ static type_qualifier_list_opt assignment_expression ]");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET
				{myprintf("direct_declarator =>  direct_declarator [ type_qualifier_list static assignment_expression ]");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET         // optional
				{myprintf("direct_declarator => direct_declarator [ type_qualifier_list_opt * ]");}
        | direct_declarator LEFT_PARENTHESES parameter_type_list RIGHT_PARANTHESES
				{myprintf("direct_declarator => direct_declarator ( parameter_type_list )");}
        | direct_declarator LEFT_PARENTHESES identifier_list_opt RIGHT_PARANTHESES             // optional
				{myprintf("direct_declarator => direct_declarator ( identifier_list_opt )");}
        ;

type_qualifier_list_opt:
		  type_qualifier_list
		  		{myprintf("type_qualifier_list_opt => type_qualifier_list");}
		|
				{myprintf("type_qualifier_list_opt => epsilon");}
		;

assignment_expression_opt:
		  assignment_expression
		  		{myprintf("assignment_expression_opt => assignment_expression");}
		|
				{myprintf("assignment_expression_opt => epsilon");}
		;

identifier_list_opt:
		  identifier_list
		  		{myprintf("identifier_list_opt => identifier_list");}
		|
				{myprintf("identifier_list_opt => epslion");}
		;

pointer:    
          ASTERISK type_qualifier_list_opt
		  		{myprintf("pointer => * type_qualifier_list_opt");}
        | ASTERISK type_qualifier_list_opt pointer                      // optional
				{myprintf("pointer => * type_qualifier_list_opt pointer");}
        ;

type_qualifier_list:
          type_qualifier
		  		{myprintf("type_qualifier_list => type_qualifier");}
        | type_qualifier_list type_qualifier             // optional
				{myprintf("type_qualifier_list => type_qualifier_list type_qualifier");}
        ;

parameter_type_list:
          parameter_list 
		  		{myprintf("parameter_type_list => parameter_list");}
        | parameter_list COMMA ELLIPSIS
				{myprintf("parameter_type_list => parameter_list , ...");}
        ;

parameter_list:
          parameter_declaration
		  		{myprintf("parameter_list => parameter_declaration");}
        | parameter_list COMMA parameter_declaration
				{myprintf("parameter_list => parameter_list , parameter_declaration");}
        ;

parameter_declaration:
          declaration_specifiers declarator
		  		{myprintf("parameter_declaration => declaration_specifiers declarator");}
        | declaration_specifiers
				{myprintf("parameter_declaration => declaration_specifiers");}
        ;

identifier_list:
          IDENTIFIER
		  		{myprintf("identifier_list => IDENTIFIER\t");printf("(IDENTIFIER = %s)",$1);}
        | identifier_list COMMA IDENTIFIER
				{myprintf("identifier_list => identifier_list , IDENTIFIER\t");printf("(IDENTIFIER = %s)",$3);}
        ;
        
typename:
          specifier_qualifier_list
		  		{myprintf("typename => specifier_qualifier_list");}
        ;

initializer:
          assignment_expression 
		  		{myprintf("initializer => assignment_expression");}
        | LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE
				{myprintf("initializer => { initializer_list }");}
        | LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE
				{myprintf("initializer => { initializer_list , }");}
        ;

initializer_list:
          designation_opt initializer    // optional
		  		{myprintf("initializer_list => designation_opt initializer");}
        | initializer_list COMMA designation_opt initializer
				{myprintf("initializer_list => initializer_list , designation_opt initializer");}
        ;

designation_opt:
		  designation
		  		{myprintf("designation_opt => designation");}
		|
				{myprintf("designation_opt => epsilon");}
		;

designation:
          designator_list EQUAL_TO
		  		{myprintf("designation => designator_list =");}
        ;

designator_list:
          designator 
		  		{myprintf("designator_list => designator");}
        | designator_list designator
				{myprintf("designator_list => designator_list designator");}
        ;

designator:
          LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET
		  		{myprintf("designator => [ constant_expression ]");}
        | DOT IDENTIFIER 
				{myprintf("designator => . IDENTIFIER\t");printf("(IDENTIFIER = %s)",$2);}
        ;

statement:
		  labeled_statement
		  		{myprintf("statement => labeled_statement");}
		| compound_statement
				{myprintf("statement => compound_statement");}
		| expression_statement
				{myprintf("statement => expression_statement");}
		| selection_statement
				{myprintf("statement => selection_statement");}	
		| iteration_statement
				{myprintf("statement => iteration_statement");}
		| jump_statement
				{myprintf("statement => jump_statement");}
		;

labeled_statement:
		  IDENTIFIER COLON statement
				{myprintf("labeled_statement => IDENTIFIER : statement\t");printf("(IDENTIFIER = %s)",$1);}
		| CASE constant_expression COLON statement
				{myprintf("labeled_statement => case constant_expression : statement");}
		| DEFAULT COLON statement
				{myprintf("labeled_statement => default : statement");}
		;
compound_statement:
		LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE //optional
				{myprintf("compound_statement => { block_item_list_opt }");}
		;

block_item_list_opt:
		  block_item_list
		  		{myprintf("block_item_list_opt => block_item_list");}
		|
				{myprintf("block_item_list_opt => epsilon");}
		;

block_item_list:
		  block_item
		  		{myprintf("block_item_list => block_item");}
		| block_item_list block_item
				{myprintf("block_item_list => block_item_list block_item");}
		;

block_item:
		  declaration
		  		{myprintf("block_item => declaration");}
		| statement
				{myprintf("block_item => statement");}
		;

expression_statement:
		  expression_opt SEMICOLON  //optional
		  		{myprintf("expression_statement => expression_opt ;");}
		;

expression_opt:
		  expression
		  		{myprintf("expression_opt => expression");}
		|
				{myprintf("expression_opt => epsilon");}
		;

selection_statement:
	  	  IF LEFT_PARENTHESES expression RIGHT_PARANTHESES statement
		  		{myprintf("selection_statement => if ( expression ) statement");}
		| IF LEFT_PARENTHESES expression RIGHT_PARANTHESES statement ELSE statement
				{myprintf("selection_statement => if ( expression ) statement else statement");}
		| SWITCH LEFT_PARENTHESES expression RIGHT_PARANTHESES statement 	
				{myprintf("selection_statement => switch ( expression ) statement");}
		;

iteration_statement:
		  WHILE LEFT_PARENTHESES expression RIGHT_PARANTHESES statement
		  		{myprintf("iteration_statement => while ( expression ) statement");}
		| DO statement WHILE LEFT_PARENTHESES expression RIGHT_PARANTHESES SEMICOLON
				{myprintf("iteration_statement => do statement while ( expression ) ;");}
		| FOR LEFT_PARENTHESES expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PARANTHESES statement
				{myprintf("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement");}
		| FOR LEFT_PARENTHESES declaration expression_opt SEMICOLON expression_opt RIGHT_PARANTHESES statement
				{myprintf("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement");}
		;

jump_statement:
		  GOTO IDENTIFIER SEMICOLON
		  		{myprintf("jump_statement => goto IDENTIFIER ;\t");printf("(IDENTIFIER = %s)",$2);}
		| CONTINUE SEMICOLON
				{myprintf("jump_statement => continue ;");}
		| BREAK SEMICOLON
				{myprintf("jump_statement => break ;");}
		| RETURN expression_opt SEMICOLON
				{myprintf("jump_statement => return expression_opt ;");}
		;

translation_unit:
		  external_declaration
		  		{myprintf("translation_unit => external_declaration");}
		| translation_unit external_declaration
				{myprintf("translation_unit => translation_unit external_declaration");}
		;

external_declaration:
		  function_definition
		  		{myprintf("external_declaration => function_definition");}
		| declaration
				{myprintf("external_declaration => declaration");}
		;

function_definition:
		  declaration_specifiers declarator declaration_list_opt compound_statement
		  		{myprintf("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement");}
		;

declaration_list_opt:
		  declaration_list
		  		{myprintf("declaration_list_opt => declaration_list");}
		|
				{myprintf("declaration_list_opt => epsilon");}
		;

declaration_list:
		 declaration
		 		{myprintf("declaration_list => declaration");}
		| declaration_list declaration
				{myprintf("declaration_list => declaration_list declaration");}
		;
%%

void yyerror(char * s){
	printf("Error in line %d --> %s",lc,s);
	return;
}

void myprintf(char * s){
	printf("%s\n",s);
}