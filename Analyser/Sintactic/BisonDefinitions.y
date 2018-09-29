%{
// Required to some functions
#include <stdio.h>

// Things Bison need to know of Flex...
extern int yylex();
extern FILE * yyin;
extern int yylineno;

// Syntactic analyser functions
int ParseExpression();
int ParseFile(char * path);
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

int ParseFile(char * filePath){
  FILE * inputFile;
  if (!(inputFile = fopen(filePath, "r"))) return -1; // Could not open file
  yyin = inputFile;
  return yyparse();
}

int ParseExpression(){
  return yyparse();
}