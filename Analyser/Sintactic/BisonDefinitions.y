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
  int intVal;
  double doubleVal;
  char * stringVal;
  char charVal;
}
%token VIP_void 
%token VIP_int
%token VIP_double
%token VIP_bool
%token VIP_string
%token VIP_class
%token VIP_interface
%token VIP_null
%token VIP_this
%token VIP_extends
%token VIP_implements
%token VIP_for
%token VIP_while
%token VIP_if
%token VIP_else
%token VIP_return
%token VIP_break
%token VIP_New
%token VIP_NewArray
%token VIP_Print
%token VIP_ReadInteger
%token VIP_ReadLine
%token VIP_Malloc
%token IDENTIFIER
%token NUM_int
%token NUM_hex
%token NUM_double
%token STRING
%token BOOL
%token OPT_plus
%token OPT_minus
%token OPT_times
%token OPT_divide
%token OPT_mod
%token OPT_lower
%token OPT_lower_equal
%token OPT_greater
%token OPT_greater_equal
%token OPT_assign
%token OPT_equal
%token OPT_not_equal
%token OPT_and
%token OPT_or
%token OPT_not
%token OPT_semicolon
%token OPT_dot
%token OPT_coma
%token OPT_left_bracket
%token OPT_right_bracket
%token OPT_left_brace
%token OPT_right_brace
%token OPT_left_parentheses
%token OPT_right_parentheses
%token OPT_brackets
%token OPT_parentheses
%token OPT_braces

%%
A :  VIP_int OPT_assign { printf("works\n");}

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