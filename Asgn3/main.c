#include <stdio.h>
#include "lex_return.h"

extern int yylex();
extern char* yytext;
extern FILE* yyin;
extern int lc;

int main(int argc,char * argv[]){
        
    printf("\n");
    if(argc > 1){
        FILE* fp = fopen(argv[1],"r");
        if(fp) yyin = fp;
    }

    int token;

    while((token = yylex())!=0){

        switch(token){

            case KEYWORD: printf("<KEYWORD, %s>",yytext);
                    break;

            case ID: printf("<ID, %s>",yytext);
                    break;

            case CONST: printf("<CONST, %s>",yytext);
                    break;

            case STRING_LITERAL: printf("<STRING_LITERAL, %s>",yytext);
                    break;

            case PUNC: printf("<PUNC, %s>",yytext);
                    break;
        
            case ERR: printf("Error in line %d\n",lc);  
                    break;  
        }

        printf(" ");

    }

    printf("\n");

    return 0;
}