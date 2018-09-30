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
%start PROGRAM
%union {
  int intVal;
  double doubleVal;
  char * stringVal;
  char charVal;
}
%token vip_void 
%token vip_int
%token vip_double
%token vip_bool
%token vip_string
%token vip_class
%token vip_interface
%token vip_null
%token vip_this
%token vip_extends
%token vip_implements
%token vip_for
%token vip_while
%token vip_if
%token vip_else
%token vip_return
%token vip_break
%token vip_New
%token vip_NewArray
%token vip_Print
%token vip_ReadInteger
%token vip_ReadLine
%token vip_Malloc
%token identifier
%token num_int
%token num_hex
%token num_double
%token val_string
%token val_bool
%token opt_plus
%token opt_minus
%token opt_times
%token opt_divide
%token opt_mod
%token opt_lower
%token opt_lower_equal
%token opt_greater
%token opt_greater_equal
%token opt_assign
%token opt_equal
%token opt_not_equal
%token opt_and
%token opt_or
%token opt_not
%token opt_semicolon
%token opt_dot
%token opt_coma
%token opt_left_bracket
%token opt_right_bracket
%token opt_left_brace
%token opt_right_brace
%token opt_left_parentheses
%token opt_right_parentheses
%token opt_brackets
%token opt_parentheses
%token opt_braces

%%
PROGRAM : num_double {;}

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