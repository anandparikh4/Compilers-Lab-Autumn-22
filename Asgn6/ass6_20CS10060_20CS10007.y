%{
  /*
    Bison File with semantic rules
    Name:
        Soni Aditya Bharatbhai 20CS10060
        Anand Manojkumar Parikh 20CS10007
  */

	#include "ass6_20CS10060_translator.h"
	
	extern int yylex();
	extern int lc; //LINE COUNT
	void yyerror(string s);  //prints error message
	void myprintf(string s); //prints the production rules used
%}

//union consisting of possible datatypes of terminals and non-terminals
%union{
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
}

//tokens which have an attribute value
%token <idval> IDENTIFIER
%token <intval> INT_CONSTANT
%token <floatval> FLOAT_CONSTANT
%token <charval> CHAR_CONSTANT
%token <strval> STRING_LITERAL

//tokens which do not have an attribute value
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
%token RIGHT_PARENTHESES
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

//ELSE, THEN are right-associative operators, translation_unit is start symbol
%right THEN ELSE
%start translation_unit

// unary operator has char as its attribute
%type<__unaryOperator> 
    unary_operator

// int is used to store number of arguments
%type<__parameterCount> 
    argument_expression_list 
    argument_expression_list_opt

// all attributes for non-terminals dealing with expressions are of type "class expression*"
%type<__expression>
	expression
	primary_expression 
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression
	equality_expression
	AND_expression
	exclusive_OR_expression
	inclusive_OR_expression
	logical_AND_expression
	logical_OR_expression
	conditional_expression
	assignment_expression
	expression_statement
  expression_opt

// all non-terminals dealing with arrays belong to "class Array"
%type<__array> 
  postfix_expression
	unary_expression
	cast_expression

// all non-terminals dealing with statements belong to "class statement"
%type <__statement>  
  statement
	compound_statement
	selection_statement
	iteration_statement
	labeled_statement 
	jump_statement
	block_item
	block_item_list
	block_item_list_opt
  N

// attribute value for pointer is class sym_type*
%type<__symbolType> 
    pointer

// attribute value is taken as class sym
%type<__symbol> 
    initializer
    direct_declarator 
    init_declarator 
    declarator

// M is marker non-terminal used in backpatching, has attribute int for the instruction number
%type <__instructionNumber> 
  M

%%
//production rules with semantic actions

primary_expression:
          IDENTIFIER
				{
          //create new expression and symbol is obtained from IDENTIFIER, type is non-boolean for expression class object
					myprintf("primary_expression => IDENTIFIER\t");
          $$ = new expression();
          $$->loc = $1;
          $$->type = "nonboolean"; 
				}
        | INT_CONSTANT
				{
          //create new expression and symbol is created using gentemp, three-address code generated for temporary 
					myprintf("primary_expression => INT_CONSTANT\t");
          $$ = new expression();
          $$->loc = gentemp("int", to_string($1));
          emit("=", $$->loc->name, $1);
				}
        | FLOAT_CONSTANT
				{
          //create new expression and symbol is created using gentemp
          //three-address code generated for temporary symbol initialization
					myprintf("primary_expression => FLOAT_CONSTANT\t");
          $$ = new expression();
          $$->loc = gentemp("float", $1);
          emit("=", $$->loc->name, $1);
				}
        | CHAR_CONSTANT
				{
          //create new expression and symbol is created using gentemp
          //three-address code generated for temporary
					myprintf("primary_expression => CHAR_CONSTANT\t");
          $$ = new expression();
          $$->loc = gentemp("char", $1);
          emit("=", $$->loc->name, $1);
				}
        | STRING_LITERAL
				{
          //create new expression and symbol is created using gentemp
          //three-address code generated for temporary 
					
					myprintf("primary_expression => STRING_LITERAL\t");
          $$ = new expression();
          $$->loc = gentemp("pointer", $1);
          $$->loc->type->array_type = new sym_type("char");
          emit("=str", $$->loc->name, stringliterals.size());
          stringliterals.push_back($1);
          
				}
        | LEFT_PARENTHESES expression RIGHT_PARENTHESES
				{
          //primary expression is the same as expression, hence $$ = $2
					myprintf("primary_expression => ( expression )");
					$$ = $2;
				}
        ;

postfix_expression:
          primary_expression
		  		{
              // create new Array object for postfix_expression
              //initialize loc,addr,sub_array_type accordinglt
              myprintf("postfix_expression => primary_expression");
              $$ = new Array();
              $$->loc = $1->loc;
              $$->addr = $$->loc;
              $$->sub_array_type = $1->loc->type;
          }
        | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET
				{
				 	myprintf("postfix_expression => postfix_expression [ expression ]");
          $$ = new Array();
          $$->loc = $1->loc;    // symbol does not change
          $$->sub_array_type = $1->sub_array_type->array_type; 
          // head generates a subarray of lower dimension so we have to go deeper

          $$->addr = gentemp("int"); // create temporary for offset computation
          $$->type = "array";    // initialize type
          //now we generate TAC for offset computation
          if($1->type == "array"){
              //we need to add offset from body because array is multi-dimensional
              sym *symb = gentemp("int");
              emit("*", symb->name, $3->loc->name, to_string(get_size($$->sub_array_type)));
              emit("+", $$->addr->name, $1->addr->name, symb->name);
          } 
          else{
              //the outermost dimension of array is being dealt with
              //so just multiply size of type with index to get offset
              emit("*", $$->addr->name, $3->loc->name, to_string(get_size($$->sub_array_type)));
          }
				}
        | postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARENTHESES     
				{
          
					myprintf("postfix_expression => postfix_expression ( argument_expression_list_opt )");
          $$ = new Array();
          $$->loc = gentemp($1->loc->type->type);
          //generate TAC for function call
          $$->loc->type->array_type = $1->loc->type->array_type;
          emit("call", $$->loc->name, $1->loc->name, to_string($3));


				}
        | postfix_expression DOT IDENTIFIER
				{myprintf("postfix_expression => postfix_expression . IDENTIFIER\t");}
        | postfix_expression ARROW IDENTIFIER
				{myprintf("postfix_expression => postfix_expression -> IDENTIFIER\t");}
        | postfix_expression INCREMENT
				{
          //generate TAC for increment operation
					myprintf("postfix_expression => postfix_expression ++");
          $$ = new Array();
          $$->loc = gentemp($1->loc->type->type);
          emit("=", $$->loc->name, $1->loc->name);
          emit("+", $1->loc->name, $1->loc->name, to_string(1));
				}
        | postfix_expression DECREMENT
				{
          //generate TAC for decrement operation
					myprintf("postfix_expression => postfix_expression --");
          $$ = new Array();
          $$->loc = gentemp($1->loc->type->type);
          emit("=", $$->loc->name, $1->loc->name);
          emit("-", $1->loc->name, $1->loc->name, to_string(1));
				}
        | LEFT_PARENTHESES typename RIGHT_PARENTHESES LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE
				{myprintf("postfix_expression => ( typename ) { initializer_list }");}
        | LEFT_PARENTHESES typename RIGHT_PARENTHESES LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE
				{myprintf("postfix_expression => ( typename ) { initializer_list , }");}
        ;

argument_expression_list_opt:
		  argument_expression_list
		  	{
					//initialize number of arguments in $$ using $1
          myprintf("argument_expression_list_opt => argument_expression_list");
					$$ = $1;
				}
		|
				{
          //epsilon production so number of arguments is 0
					myprintf("argument_expression_list_opt => epsilon");
					$$ = 0;
				}
		;

argument_expression_list:
          assignment_expression
		  	{
          //emit TAC for parameter, number of arguments is made 1
					myprintf("argument_expression_list => assignment_expression");
          emit("param", $1->loc->name);
          $$ = 1;
				}
        | argument_expression_list COMMA assignment_expression
				{
					myprintf("argument_expression_list => argument_expression_list , assignment_expression");
          emit("param", $3->loc->name);
          $$ = $1 + 1; //total number of parameters in $$ = parameter count in $1 + 1
				}
        ;

unary_expression:
          postfix_expression
		  	{
					myprintf("unary_expression => postfix_expression");
					$$ = $1;  //both $$ and $1 point to same expression class object
				}
        | INCREMENT unary_expression
				{
					myprintf("unary_expression => ++ unary_expression");
          $$ = $2;  //both $$ and $2 point to same expression class object
          emit("+", $2->loc->name, $2->loc->name, to_string(1)); //TAC generated
				}
        | DECREMENT unary_expression
				{
					myprintf("unary_expression => -- unary_expression");
          $$ = $2;   //both $$ and $2 point to same expression class object
          emit("-", $2->loc->name, $2->loc->name, to_string(1));
				}
        | unary_operator cast_expression
				{
					myprintf("unary_expression => unary_operator cast_expression");
          if(strcmp($1, "&") == 0) {
              // deals with cases like a = &b etc. $$ is a pointer
              $$ = new Array();
              $$->loc = gentemp("pointer");
              $$->loc->type->array_type = $2->loc->type;
              emit("=&", $$->loc->name, $2->loc->name);
          } else if(strcmp($1, "*") == 0) {
              //deals with x = *y dereferencing operation
              $$ = new Array();
              $$->loc = $2->loc;
              $$->addr = gentemp($2->addr->type->array_type->type);
              $$->addr->type->array_type = $2->addr->type->array_type->array_type;
              $$->type = "pointer";
              emit("=*", $$->addr->name, $2->addr->name);
          } else if(strcmp($1, "+") == 0) {
              //unary + operator so no action
              $$ = $2;
          } else {
              // simply apply the operator for -,~,! on $2 to generate TAC
              $$ = new Array();
              $$->loc = gentemp($2->loc->type->type);
              emit($1, $$->loc->name, $2->loc->name);
          }
				}
        | SIZEOF unary_expression
				{myprintf("unary_expression => sizeof unary_expression");}
        | SIZEOF LEFT_PARENTHESES typename RIGHT_PARENTHESES
				{myprintf("unary_expression => sizeof ( typename )");}
        ;

//the attribute for unary_operator is set in lex file
unary_operator:
        BITWISE_AND
		  		{myprintf("unary_operator => &");$$ = strdup("&");}
        | ASTERISK
				{myprintf("unary_operator => *");$$ = strdup("*");}
        | PLUS
				{myprintf("unary_operator => +");$$ = strdup("+");}
        | MINUS
				{myprintf("unary_operator => -");$$ = strdup("=-");}
        | TILDE
				{myprintf("unary_operator => ~");$$ = strdup("~");}
        | EXCLAMATORY_MARK
				{myprintf("unary_operator => !");$$ = strdup("!");}
        ;

cast_expression:
        unary_expression
        {
					myprintf("cast_expression => unary_expression");
					$$ = $1;
				}
        | LEFT_PARENTHESES typename RIGHT_PARENTHESES cast_expression
				{
          myprintf("cast_expression => ( typename ) cast_expression");
          $$ = new Array();
          $$->loc = $4->loc->convert(curr_type); //type conversion is done here for the symbol
        }
        ;


// We extract the base type of the array
// If the type is array we obtain the value by indexing 
// Using the symbol name, the temporary is used to calculate the location and assign it to the newly generated temporary
// If it is a pointer or array then simply equate the symbol
// Now we apply the necessary operation that is *,/ or % after proper type checking
// same rules are followes for additive and shift expression
multiplicative_expression:
          cast_expression
		  		{
            myprintf("multiplicative_expression => cast_expression");
            sym_type *baseType = $1->loc->type;
            while(baseType->array_type)
                baseType = baseType->array_type; 
            $$ = new expression();
            if($1->type == "array") {
                $$->loc = gentemp(baseType->type);
                emit("=[]", $$->loc->name, $1->loc->name, $1->addr->name);
            } else if($1->type == "pointer") {
                $$->loc = $1->addr;
            } else {
                $$->loc = $1->loc;
            }
				}
        | multiplicative_expression ASTERISK cast_expression
				{
					myprintf("multiplicative_expression => multiplicative_expression * cast_expression");
          sym_type *baseType = $3->loc->type;
          while(baseType->array_type)
              baseType = baseType->array_type;
          sym *temp;
          if($3->type == "array") {
              temp = gentemp(baseType->type);
              emit("=[]", temp->name, $3->loc->name, $3->addr->name);
          } else if($3->type == "pointer") {
              temp = $3->addr;
          } else {
              temp = $3->loc;
          }
          if(check_type($1->loc, temp)) {
              $$ = new expression();
              $$->loc = gentemp($1->loc->type->type);
              emit("*", $$->loc->name, $1->loc->name, temp->name);
          } else {
              yyerror("Type error.");
          }
				}
        | multiplicative_expression FORWARD_SLASH cast_expression
				{
            myprintf("multiplicative_expression => multiplicative_expression / cast_expression");
            sym_type *baseType = $3->loc->type;
            while(baseType->array_type)
                baseType = baseType->array_type;
            sym *temp;
            if($3->type == "array") {
                temp = gentemp(baseType->type);
                emit("=[]", temp->name, $3->loc->name, $3->addr->name);
            } else if($3->type == "pointer") {
                temp = $3->addr;
            } else {
                temp = $3->loc;
            }
            if(check_type($1->loc, temp)) {
                $$ = new expression();
                $$->loc = gentemp($1->loc->type->type);
                emit("/", $$->loc->name, $1->loc->name, temp->name);
            } else {
                yyerror("Type error.");
            }
        		}
        | multiplicative_expression MODULO cast_expression
				{
					myprintf("multiplicative_expression => multiplicative_expression % cast_expression");
          sym_type *baseType = $3->loc->type;
          while(baseType->array_type)baseType = baseType->array_type;
          sym *temp;
          if($3->type == "array") {
              temp = gentemp(baseType->type);
              emit("=[]", temp->name, $3->loc->name, $3->addr->name);
          } else if($3->type == "pointer") {
              temp = $3->addr;
          } else {
              temp = $3->loc;
          }
          if(check_type($1->loc, temp)) {
              $$ = new expression();
              $$->loc = gentemp($1->loc->type->type);
              emit("%", $$->loc->name, $1->loc->name, temp->name);
          } else {
              yyerror("Type error.");
          }
				}     
        ;

additive_expression:
          multiplicative_expression
		  		{
            myprintf("additive_expression => multiplicative_expression");
					  $$ = $1;
				  }
        | additive_expression PLUS multiplicative_expression
		  		{
					myprintf("additive_expression => additive_expression + multiplicative_expression");
                    if(check_type($1->loc, $3->loc)) {
                        $$ = new expression();
                        $$->loc = gentemp($1->loc->type->type);
                        emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
        | additive_expression MINUS multiplicative_expression
		  		{
					myprintf("additive_expression => additive_expression - multiplicative_expression");
                    if(check_type($1->loc, $3->loc)) {
                        $$ = new expression();
                        $$->loc = gentemp($1->loc->type->type);
                        emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
        ;
    
shift_expression:
          additive_expression
		  		{
            myprintf("shift_expression => additive_expression");
					  $$ = $1;
				  }
        | shift_expression LEFT_SHIFT additive_expression
				{myprintf("shift_expression => shift_expression << additive_expression");
                    if($3->loc->type->type == "int") {
                        $$ = new expression();
                        $$->loc = gentemp("int");
                        emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);
                    } else {
                		yyerror("Type error.");
                    }
				}
        | shift_expression RIGHT_SHIFT additive_expression
				{
					myprintf("shift_expression => shift_expression >> additive_expression");
                    if($3->loc->type->type == "int") {
                        $$ = new expression();
                        $$->loc = gentemp("int");
                        emit(">>", $$->loc->name, $1->loc->name, $3->loc->name);
                    } else {
                        yyerror("Type error.");
                    }
				}
        ;

//boolean expressions are dealt with here
// we perform operations like backpatching, initialize truelist and falselist of production head
// and generate TAC for these expressions
relational_expression:
          shift_expression 
		  		{
            myprintf("relational_expression => shift_expression");
					  $$ = $1;
				  }
        //rules for E1 rel E2 as discussed in class
        | relational_expression LESS_THAN shift_expression
				{
					myprintf("relational_expression => relational_expression < shift_expression");
          if(check_type($1->loc, $3->loc)) {
              $$ = new expression();
              $$->type = "boolean";
              $$->truelist = makelist(next_instr());
              $$->falselist = makelist(next_instr() + 1);
              emit("<", "", $1->loc->name, $3->loc->name);
              emit("goto", "");
          } else {
              yyerror("Type error.");
          }
				}
        | relational_expression GREATER_THAN shift_expression
				{
          myprintf("relational_expression => relational_expression > shift_expression");
          if(check_type($1->loc, $3->loc)) {
              $$ = new expression();
              $$->type = "boolean";
              $$->truelist = makelist(next_instr());
              $$->falselist = makelist(next_instr() + 1);
              emit(">", "", $1->loc->name, $3->loc->name);
              emit("goto", "");
          } else {
              yyerror("Type error.");
          }
				}
        | relational_expression LESS_EQUAL shift_expression	
				{
					myprintf("relational_expression => relational_expression <= shift_expression");
          if(check_type($1->loc, $3->loc)) {
              $$ = new expression();
              $$->type = "boolean";
              $$->truelist = makelist(next_instr());
              $$->falselist = makelist(next_instr() + 1);
              emit("<=", "", $1->loc->name, $3->loc->name);
              emit("goto", "");
          } else {
            yyerror("Type error.");
          }
				}
        | relational_expression GREATER_EQUAL shift_expression
				{
					myprintf("relational_expression => relational_expression >= shift_expression");
          if(check_type($1->loc, $3->loc)) {
                $$ = new expression();
                $$->type = "boolean";
                $$->truelist = makelist(next_instr());
                $$->falselist = makelist(next_instr() + 1);
                emit(">=", "", $1->loc->name, $3->loc->name);
                emit("goto", "");
          } 
          else {
              yyerror("Type error.");
          }
				}
        ;
//expressions having == and != are dealt with here, similar to E1 rel E2 productions
equality_expression:
          relational_expression
		  		{
            myprintf("equality_expression => relational_expression");
					  $$ = $1;
				}
        | equality_expression ISEQUAL relational_expression
				{
          myprintf("equality_expression => equality_expression == relational_expression");
          if(check_type($1->loc, $3->loc)) {
              $1->conv2int();
              $3->conv2int();
              $$ = new expression();
              $$->type = "boolean";
              $$->truelist = makelist(next_instr());
              $$->falselist = makelist(next_instr() + 1);
              emit("==", "", $1->loc->name, $3->loc->name);
              emit("goto", "");
          } else {
              yyerror("Type error.");
          }
				}
        | equality_expression NOTEQUAL relational_expression
				{
					myprintf("equality_expression => equality_expression != relational_expression");
          if(check_type($1->loc, $3->loc)) {
              $1->conv2int();
              $3->conv2int();
              $$ = new expression();
              $$->type = "boolean";
              $$->truelist = makelist(next_instr());
              $$->falselist = makelist(next_instr() + 1);
              emit("!=", "", $1->loc->name, $3->loc->name);
              emit("goto", "");
          } else {
              yyerror("Type error.");
          }
				}
        ;
    
//expressions with bitwise operators are dealt with here
AND_expression:
          equality_expression
		  		{
            myprintf("AND_expression => equality_expression");
					  $$ = $1;
				}
        | AND_expression BITWISE_AND equality_expression
				{
					myprintf("AND_expression => AND_expression & equality_expression");
          $1->conv2int();
          $3->conv2int();
          $$ = new expression();
          $$->type = "nonboolean";
          $$->loc = gentemp("int");
          emit("&", $$->loc->name, $1->loc->name, $3->loc->name);
				}
        ;

exclusive_OR_expression:
          AND_expression
				{
          myprintf("exclusive_OR_expression => AND_expression");
					$$ = $1;
				}
        | exclusive_OR_expression BITWISE_XOR AND_expression
				{
					myprintf("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression");
                    $1->conv2int();
                    $3->conv2int();
                    $$ = new expression();
                	$$->type = "nonboolean";
                    $$->loc = gentemp("int");
                    emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
				}
        ;

inclusive_OR_expression:
          exclusive_OR_expression
		  		{
            myprintf("inclusive_OR_expression => exclusive_OR_expression");
					  $$ = $1;
				}
        | inclusive_OR_expression BITWISE_OR exclusive_OR_expression
				{
					myprintf("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression");
                    $1->conv2int();
                    $3->conv2int();
                    $$ = new expression();
                    $$->type = "nonboolean";
                    $$->loc = gentemp("int");
                    emit("|", $$->loc->name, $1->loc->name, $3->loc->name);
				}
        ;

//marker non-terminal for next_instruction and grammar augmentation
M:  
    {
        myprintf("M => epsilon");
        $$ = next_instr();
    }   
    ;

//fall-through guard non-terminal
N: 
    {
        myprintf("N => epsilon");
        $$ = new statement();
        $$->nextlist = makelist(next_instr());
        emit("goto", "");
    }
	;

//expressions boolean AND,OR are dealt with here
logical_AND_expression:
          inclusive_OR_expression
		  	{
					myprintf("logical_AND_expression => inclusive_OR_expression");
					$$ = $1;
				}
        | logical_AND_expression LOGICAL_AND M inclusive_OR_expression
				{
					myprintf("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");
          $1->conv2bool();
          $4->conv2bool();
          $$ = new expression();
          $$->type = "boolean";
          backpatch($1->truelist, $3);
          $$->truelist = $4->truelist;
          $$->falselist = merge($1->falselist, $4->falselist);
				}
        ;

logical_OR_expression:
          logical_AND_expression
		  		{
					myprintf("logical_OR_expression => logical_AND_expression");
					$$ = $1;
				}
        | logical_OR_expression LOGICAL_OR M logical_AND_expression
				{
					myprintf("logical_OR_expression => logical_OR_expression || logical_AND_expression");
          $1->conv2bool();
          $4->conv2bool();
          $$ = new expression();
          $$->type = "boolean";
          backpatch($1->falselist, $3);
          $$->truelist = merge($1->truelist, $4->truelist);
          $$->falselist = $4->falselist;
				}
        ;

conditional_expression:
          logical_OR_expression
		  		{
					myprintf("conditional_expression => logical_OR_expression");
					$$ = $1;
				}
        | logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression
				{
					myprintf("conditional_expression => logical_OR_expression ? expression : conditional_expression");
          $$->loc = gentemp($5->loc->type->type);
          emit("=", $$->loc->name, $9->loc->name);
          list<int> l = makelist(next_instr());
          emit("goto", "");
          backpatch($6->nextlist, next_instr());
          emit("=", $$->loc->name, $5->loc->name);
          l = merge(l, makelist(next_instr()));
          emit("goto", "");
          backpatch($2->nextlist, next_instr());
          $1->conv2bool();
          backpatch($1->truelist, $4);
          backpatch($1->falselist, $8);
          backpatch(l, next_instr());
				}
        ;

assignment_expression:
          conditional_expression
				{
					myprintf("assignment_expression => conditional_expression");
					$$ = $1;
				}
        | unary_expression assignment_operator assignment_expression
				{
					myprintf("assignment_expression => unary_expression assignment_operator assignment_expression");
          if($1->type == "array") {
              // assignment to array
              $3->loc = $3->loc->convert($1->sub_array_type->type);
              emit("[]=", $1->loc->name, $1->addr->name, $3->loc->name);
          } else if($1->type == "pointer") {
              // assignment to pointer
              $3->loc = $3->loc->convert($1->addr->type->type);
              emit("*=", $1->addr->name, $3->loc->name);
          } else {
              // assignment to other
              $3->loc = $3->loc->convert($1->loc->type->type);
          emit("=", $1->loc->name, $3->loc->name);
          }
          $$ = $3;
				}
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
		  	{	
					myprintf("expression => assignment_expression");
					$$ = $1;
				}
        | expression COMMA assignment_expression
				{myprintf("expression => expression , assignment_expression");}
        ;

constant_expression:
          conditional_expression
		  		{myprintf("constant_expression => conditional_expression");}
        ;


declaration:
          declaration_specifiers init_declarator_list_opt SEMICOLON    
		  		{myprintf("declaration => declaration_specifiers init_declarator_list_opt ;");}
        ;

init_declarator_list_opt:
		  init_declarator_list
		  		{myprintf("init_declarator_list_opt => init_declarator_list");}
		|
				{myprintf("init_declarator_list_opt => epsilon");}
		;

declaration_specifiers:
          storage_class_specifier declaration_specifiers_opt            
		  		{myprintf("declaration_specifiers => storage_class_specifier declaration_specifiers_opt");}
        | type_specifier declaration_specifiers_opt                     
				{myprintf("declaration_specifiers => type_specifier declaration_specifiers_opt ");}
        | type_qualifier declaration_specifiers_opt                     
				{myprintf("declaration_specifiers => type_qualifier declaration_specifiers_opt");}
        | function_specifier declaration_specifiers_opt                 
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
		  	{
					myprintf("init_declarator => declarator");
					$$ = $1;	
				}
        | declarator EQUAL_TO initializer 
				{
					myprintf("init_declarator => declarator = initializer");     
          if($3->val != "") $1->val = $3->val;
          emit("=", $1->name, $3->name);
				}
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
		  		{
            myprintf("type_specifier => void");
            curr_type = "void";
          }
        | CHAR 
				{
          myprintf("type_specifier => char");
          curr_type = "char";  
        }
        | SHORT 
				{myprintf("type_specifier => short");}
        | INT 
				{
          myprintf("type_specifier => int");
          curr_type = "int";
        }
        | LONG 
				{myprintf("type_specifier => long");}
        | FLOAT 
				{
          myprintf("type_specifier => float");
          curr_type = "float";
        }
        | DOUBLE 
				{myprintf("type_specifier => double");}
        | SIGNED 
				{myprintf("type_specifier => signed");}
        | UNSIGNED 
				{myprintf("type_specifier => unsigned");}
        | enum_specifier
				{myprintf("type_specifier => enum_specifier");}
        ;

specifier_qualifier_list:
          type_specifier specifier_qualifier_list_opt    
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

enum_specifier:
                ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE 
						{myprintf("enum_specifier => enum identifier_opt { enumerator_list }");}
                | ENUM identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE
						{myprintf("enum_specifier => enum identifier_opt { enumerator_list , }");}
                | ENUM IDENTIFIER
						{myprintf("enum_specifier => enum IDENTIFIER\t");}
                ;

identifier_opt:
		  IDENTIFIER
		  		{myprintf("identifier_opt => IDENTIFIER\t");}
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
          IDENTIFIER                               
		  		{myprintf("enumerator => IDENTIFIER\t");}
        | IDENTIFIER EQUAL_TO constant_expression
				{myprintf("enumerator => IDENTIFIER = constant_expression\t");}
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
            pointer direct_declarator
                { 
                    myprintf("declarator => pointer direct_declarator"); 
                    sym_type *it = $1;
                    while(it->array_type != NULL) 
                        it = it->array_type;
                    it->array_type = $2->type;
                    $$ = $2->update($1);
                }
            | direct_declarator
                { 
                    myprintf("declarator => direct_declarator"); 
                    $$ = $1;
                }
            ;

change_scope:
            {
                if(curr_sym->nested_symtab == NULL) {
                    change_table(new sym_table(""));
                }
                else{
                    change_table(curr_sym->nested_symtab);
                    emit("label", currST->name);
                }
            }
	        ;

direct_declarator:
                    IDENTIFIER 
                        { 
                            myprintf("direct_declarator => IDENTIFIER"); 
                            $$ = $1->update(new sym_type(curr_type));  //update symbol type
                            curr_sym = $$;

                        }
                    | LEFT_PARENTHESES declarator RIGHT_PARENTHESES
                        { 
                            myprintf("direct_declarator => ( declarator )"); 
                            $$ = $2;
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET assignment_expression RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ assignment_expression ]"); 
                            sym_type *it1 = $1->type, *it2 = NULL;
                            while(it1->type == "array") {
                                it2 = it1;
                                it1 = it1->array_type;
                            }
                            if(it2 != NULL) { //we are dealing with a nested array
                                // another level of nesting with base = it1 and width=value of assignment_expression
                                it2->array_type =  new sym_type("array", it1, atoi($3->loc->val.c_str()));	
                                $$ = $1->update($1->type);
                            }
                            else { // create a new array
                                $$ = $1->update(new sym_type("array", $1->type, atoi($3->loc->val.c_str())));
                            }
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ ]"); 
                            // all semantic actions same as previous rule
                            //size is unknown so it is kept 0
                            sym_type *it1 = $1->type, *it2 = NULL;
                            while(it1->type == "array") { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->array_type;
                            }
                            if(it2 != NULL) {
                                // another level of nesting with base = it1 and width=value of assignment_expression
                                it2->array_type =  new sym_type("array", it1, 0);	
                                $$ = $1->update($1->type);
                            }
                            else { // create new array
                                $$ = $1->update(new sym_type("array", $1->type, 0));
                            }
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET STATIC assignment_expression RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list ASTERISK RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
                    | direct_declarator LEFT_SQUARE_BRACKET ASTERISK RIGHT_SQUARE_BRACKET
                        { 
                            myprintf("direct_declarator => direct_declarator [ * ]"); 
                        }
                    | direct_declarator LEFT_PARENTHESES change_scope parameter_type_list RIGHT_PARENTHESES
                        { 
                            //function declarations are dealt with here
                            myprintf("direct_declarator => direct_declarator ( parameter_type_list )"); 
                            currST->name = $1->name;
                            if($1->type->type != "void") {
                                currST->lookup("return")->update($1->type); //return type is set
                            }
                            
                            $1->nested_symtab = currST; //set nested table
                            $1->category = "function";
                            currST->parent = gblST;   //set parent
                            change_table(gblST);  //current table is gblST
                            curr_sym = $$;
                        }
                    | direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES
                        { 
                            myprintf("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
                    | direct_declarator LEFT_PARENTHESES change_scope RIGHT_PARENTHESES
                        { 
                            myprintf("direct_declarator => direct_declarator ( )"); 
                            currST->name = $1->name;
                            if($1->type->type != "void") {
                                currST->lookup("return")->update($1->type); //update return type
                            }
                            
                            $1->nested_symtab = currST; //set nested symbol table
                            $1->category = "function";
                            currST->parent = gblST; //set parent of current table to the global symbol table
                            change_table(gblST);  //make current symbol table as gblST 
                            curr_sym = $$;
                        }
                    ;

type_qualifier_list_opt:
		  type_qualifier_list
		  		{myprintf("type_qualifier_list_opt => type_qualifier_list");}
		|
				{myprintf("type_qualifier_list_opt => epsilon");}
		;
pointer:    
          ASTERISK type_qualifier_list_opt
		  	{	
					myprintf("pointer => * type_qualifier_list_opt");
          $$ = new sym_type("pointer");
				}
        | ASTERISK type_qualifier_list_opt pointer                      
				{
					myprintf("pointer => * type_qualifier_list_opt pointer");
          $$ = new sym_type("pointer", $3);
				}
        ;

type_qualifier_list:
          type_qualifier
		  		{myprintf("type_qualifier_list => type_qualifier");}
        | type_qualifier_list type_qualifier             
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
		  		{
            myprintf("parameter_declaration => declaration_specifiers declarator");
            $2->category = "parameter"; 
            currST->parameter_list.push_back($2->name);  
          }
        | declaration_specifiers
				  {myprintf("parameter_declaration => declaration_specifiers");}
        ;

identifier_list:
          IDENTIFIER
		  		{myprintf("identifier_list => IDENTIFIER\t");}
        | identifier_list COMMA IDENTIFIER
				  {myprintf("identifier_list => identifier_list , IDENTIFIER\t");}
        ;
        
typename:
          specifier_qualifier_list
		  		{myprintf("typename => specifier_qualifier_list");}
        ;

initializer:
          assignment_expression 
		  		{
					myprintf("initializer => assignment_expression");
          $$ = $1->loc;
				}
        | LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE
				{myprintf("initializer => { initializer_list }");}
        | LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE
				{myprintf("initializer => { initializer_list , }");}
        ;

initializer_list:
          designation_opt initializer    
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
				  {myprintf("designator => . IDENTIFIER\t");}
        ;

statement:
		  labeled_statement
		  		{myprintf("statement => labeled_statement");}
		| compound_statement
      {
        myprintf("statement => compound_statement");
        $$ = $1;
      }
		| expression_statement
				{
					myprintf("statement => expression_statement");
          $$ = new statement();
          $$->nextlist = $1->nextlist;
				}
		| selection_statement
				{
					myprintf("statement => selection_statement");
					$$ = $1;	
				}	
		| iteration_statement
				{
					myprintf("statement => iteration_statement");
					$$ = $1;	
				}
		| jump_statement
				{
					myprintf("statement => jump_statement");
					$$ = $1;	
				}
		;

labeled_statement:
		  IDENTIFIER COLON statement
				{myprintf("labeled_statement => IDENTIFIER : statement\t");}
		| CASE constant_expression COLON statement
				{myprintf("labeled_statement => case constant_expression : statement");}
		| DEFAULT COLON statement
				{myprintf("labeled_statement => default : statement");}
		;

compound_statement:
		LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE
				{
          myprintf("compound_statement => { block_item_list_opt }");
          $$ = $2;
				}
		;

block_item_list_opt:
		  block_item_list
		  	{
          myprintf("block_item_list_opt => block_item_list");
          $$ = $1;
				}
		|
				{
          myprintf("block_item_list_opt => epsilon");
					$$ = new statement();
				}
		;

block_item_list:
		  block_item
		  		{myprintf("block_item_list => block_item");
					$$ = $1;
				}
		| block_item_list M block_item
				{
					myprintf("block_item_list => block_item_list block_item");
                    $$ = $3;
                    backpatch($1->nextlist,$2);
				}
		;

block_item:
		  declaration
		  		{
            myprintf("block_item => declaration");
					  $$ = new statement();
				  }
		| statement
				{myprintf("block_item => statement");
					$$ = $1;
				}
		;

expression_statement:
		  expression_opt SEMICOLON  
		  		{myprintf("expression_statement => expression_opt ;");
					$$ = $1;
				}
		;

expression_opt:
		  expression
		  	{
            myprintf("expression_opt => expression");
					  $$ = $1;
				}
		|
				{
          myprintf("expression_opt => epsilon");
					$$ = new expression();
				}
		;


//deals with if(B) M S1 and if(B) M1S1N else M2S2 as discussed in class
selection_statement:
	  	  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N %prec THEN
		  	{
					myprintf("selection_statement => if ( expression ) statement");
          $$ = new statement();
          $3->conv2bool();
          backpatch($3->truelist, $5);
          $$->nextlist = merge($3->falselist, merge($6->nextlist, $7->nextlist));
				}
		| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N ELSE M statement
				{
					myprintf("selection_statement => if ( expression ) statement else statement");
          $$ = new statement();
          $3->conv2bool();
          backpatch($3->truelist, $5);
          backpatch($3->falselist, $9);
          $$->nextlist = merge($10->nextlist, merge($6->nextlist, $7->nextlist));
				}
		| SWITCH LEFT_PARENTHESES expression RIGHT_PARENTHESES statement 	
				{myprintf("selection_statement => switch ( expression ) statement");}
		;

//deals with while M(B) S1, do M1 S1 while(B);for() loops
//grammar is augmented here for proper backpatching and initialization of truelist,falselist and nextlist
iteration_statement:
		  WHILE M LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement
		  	{
					myprintf("iteration_statement => while ( expression ) statement");
          $$ = new statement();
          $4->conv2bool();
          backpatch($7->nextlist, $2);
          backpatch($4->truelist, $6);
          $$->nextlist = $4->falselist;
          emit("goto", to_string($2));
				}
		| DO M statement M WHILE LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON
				{
					myprintf("iteration_statement => do statement while ( expression ) ;");
          $$ = new statement();
          $7->conv2bool();
          backpatch($7->truelist, $2);
          backpatch($3->nextlist, $4);
          $$->nextlist = $7->falselist;
				}
		| FOR LEFT_PARENTHESES expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_PARENTHESES M statement
				{
					myprintf("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement");
					$$ = new statement();
          $6->conv2bool();
          backpatch($6->truelist, $12); 
          backpatch($10->nextlist, $5); 
          backpatch($13->nextlist, $8); 
          emit("goto", to_string($8));
          $$->nextlist = $6->falselist;
				}
		| FOR LEFT_PARENTHESES declaration expression_opt SEMICOLON expression_opt RIGHT_PARENTHESES statement
				{myprintf("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement");}
		;

//deals with gotos, break,return and continue
jump_statement:
		  GOTO IDENTIFIER SEMICOLON
		  		{myprintf("jump_statement => goto IDENTIFIER ;\t");}
		| CONTINUE SEMICOLON
				{myprintf("jump_statement => continue ;");}
		| BREAK SEMICOLON
				{myprintf("jump_statement => break ;");}
		| RETURN expression_opt SEMICOLON
				{
					myprintf("jump_statement => return expression_opt ;");
          $$ = new statement();
          if($2->loc != NULL) {
              emit("return", $2->loc->name); // emit the current symbol name at return if it exists otherwise empty
          } else {
              emit("return", "");
          }
				}
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
		  declaration_specifiers declarator declaration_list_opt change_scope LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE
		  	{
					myprintf("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement");
					table_count = 0;
          emit("labelend", $2->name);
          if($2->type->type != "void")currST->lookup("return")->update($2->type);
					change_table(gblST);
				}
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

void yyerror(string s){
  cout << "Error in line" << lc << " --> " << s << "\n";
	return;
}

void myprintf(string s){
  // cout  << "Line No:" << lc << " " << s << "\n" ;
  //uncomment above line to print production rules
}