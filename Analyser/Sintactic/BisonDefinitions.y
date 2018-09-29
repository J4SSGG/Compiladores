%{
// Required to some functions
#include <stdio.h>

// Things Bison need to know of Flex...
extern int yylex();
extern FILE * yyin;
extern int yylineno;

// Syntactic analyser functions
int Parse(char * path);
void yyerror(char * s);

%}
%union {
  int intval;
  double doubleval;
  char * stringval;
  char charval;
}

%token RESERVED
%token IDENTIFIER
%token INTEGER
%token DOUBLE
%token HEXADECIMAL
%token BOOL
%token STRING
%token OPERATOR
%token ERROR
%token IGNORE
%token NEW_LINE
%token ERROR_COMMENT
%token ERROR_STRING 

%%
A :  RESERVED OPERATOR   { printf("works\n");}
%%

void yyerror(char * s){
  printf("%s", s);
}


int main (int argc, char * argv[]){
  if (argc > 1){
    FILE * inputFile = fopen(argv[1], "r");
    yyin = inputFile;
    yyparse();
  }
  return 0;
}