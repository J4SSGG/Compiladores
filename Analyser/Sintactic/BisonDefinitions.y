%{
// Required to some functions
#include <stdio.h>

// Things Bison need to know of Flex...
extern int yylex();
extern FILE * yyin;
extern int yylineno;
extern char * yytext;
extern int yydebug;
// Variables
int yycolumnlineno;

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
%token vip_GetByte
%token vip_SetByte
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


%left vip_else
%left opt_assign
%left opt_or
%left opt_and
%left opt_equal opt_not_equal
%left opt_lower opt_lower_equal opt_greater opt_greater_equal
%left opt_plus opt_minus
%left opt_times opt_divide opt_mod
%right opt_not
%left opt_left_brace opt_left_bracket opt_left_parentheses opt_right_brace opt_right_bracket opt_right_parentheses opt_dot

%%

PROGRAM 
      : DECL                  {;}
      | DECL PROGRAM          {;}
      ;

DECL  
      : VAR_DECL            {;}
      | FUNCTION_DECL       {;}
      | CLASS_DECL          {;}
      | INTERFACE_DECL      {;}   
      ;

VAR_DECL    
      : VARIABLE opt_semicolon                  {;}
      | ERR                                     {;}
      ;

VARIABLE    
      : TYPE identifier            {;}
      ;

VARIABLE_PLUS
      : VARIABLE opt_coma VARIABLE_PLUS         {;}
      | VARIABLE                                {;}
      ;

TYPE      
      : vip_int                                 {;}
      | vip_double                              {;}
      | vip_bool                                {;}
      | vip_string                              {;}
      | TYPE opt_left_bracket opt_right_bracket {;}
      ;

FUNCTION_DECL 
      : TYPE identifier opt_left_parentheses FORMALS opt_right_parentheses STMT_BLOCK             {;}
      | vip_void identifier opt_left_parentheses FORMALS opt_right_parentheses STMT_BLOCK         {;}
      ;

FORMALS 
      : VARIABLE_PLUS   {;}
      | %empty          {;}
      ;

CLASS_DECL  
      : vip_class identifier EXTENDS IMPLEMENTS opt_left_brace FIELD_ASTERISK opt_right_brace  {;}
      ;

EXTENDS 
      : vip_extends identifier      {;}
      | %empty                      {;}
      | ERR                         {;}
      ;

IMPLEMENTS
      : vip_implements IDENTIFIER_PLUS    {;}
      | %empty                            {;}
      | ERR                               {;}
      ;

IDENTIFIER_PLUS  
      : identifier opt_coma IDENTIFIER_PLUS     {;}
      | identifier                              {;}
      | ERR                         {;}
      ;

FIELD_ASTERISK
      : FIELD FIELD_ASTERISK   {;}
      | %empty          {;}
      ;

FIELD 
      : VAR_DECL        {;}
      | FUNCTION_DECL   {;}
      ;

INTERFACE_DECL    
      : vip_interface identifier opt_left_brace PROTOTYPE_ASTERISK opt_right_brace   {;}
      ;

PROTOTYPE_ASTERISK
      : PROTOTYPE  PROTOTYPE_ASTERISK     {;}
      | %empty          {;}
      | ERR                         {;}
      ;

PROTOTYPE 
      : TYPE identifier opt_left_parentheses FORMALS opt_right_parentheses opt_semicolon              {;}
      | vip_void identifier opt_left_parentheses FORMALS opt_right_parentheses opt_semicolon          {;}
      ;

STMT_BLOCK  
      : opt_left_brace VARS STMTS opt_right_brace  {;}
      ;

VARS  
      : VAR_DECL VARS   {;}
      | %empty          {;}
      ;

STMTS 
      : STATEMENT STMTS   {;}
      | %empty            {;}
      ;

STATEMENT   
      : EXPRESSION_Q opt_semicolon  {;}
      | IF_STMT                     {;}
      | WHILE_STMT                  {;}
      | FOR_STMT                    {;}
      | BREAK_STMT                  {;}
      | RETURN_STMT                 {;}
      | PRINT_STMT                  {;}
      | STMT_BLOCK                  {;}
      | ERR                         {;}
      ;

IF_STMT     
      : vip_if opt_left_parentheses EXPRESSION opt_right_parentheses STATEMENT ELSE_STMT{;}
      ;

ELSE_STMT
      : vip_else STATEMENT    {;}
      | %empty                {;}
      ;

WHILE_STMT  
      : vip_while opt_left_parentheses EXPRESSION opt_right_parentheses STATEMENT     {;}
      ;

FOR_STMT  
      : vip_for opt_left_parentheses EXPRESSION_Q opt_semicolon EXPRESSION opt_semicolon EXPRESSION_Q opt_right_parentheses STATEMENT         {;}
      ;

RETURN_STMT 
      : vip_return EXPRESSION_Q opt_semicolon    {;}
      ;

BREAK_STMT 
      : vip_break opt_semicolon     {;}
      ;

PRINT_STMT  
      : vip_Print opt_left_parentheses EXPRESSION_PLUS opt_right_parentheses opt_semicolon     {;}
      ;

EXPRESSION_Q  
      : EXPRESSION      {;}
      | %empty          {;}
      ;

EXPRESSION_PLUS
      : EXPRESSION opt_coma EXPRESSION_PLUS     {;}
      | EXPRESSION                              {;} 
      ;

EXPRESSION  
      : VALUE opt_assign EXPRESSION                                                           {;}
      | CONST                                                                                 {;}
      | VALUE                                                                                 {;}
      | vip_this                                                                              {;}
      | CALL                                                                                  {;}
      | opt_left_parentheses EXPRESSION opt_right_parentheses                                 {;}
      | EXPRESSION opt_plus EXPRESSION                                                        {;}
      | EXPRESSION opt_minus EXPRESSION                                                       {;}
      | EXPRESSION opt_divide EXPRESSION                                                      {;}
      | EXPRESSION opt_times EXPRESSION                                                       {;}
      | EXPRESSION opt_mod EXPRESSION                                                         {;}
      | opt_minus EXPRESSION                                                                  {;}
      | EXPRESSION opt_lower EXPRESSION                                                       {;}
      | EXPRESSION opt_lower_equal EXPRESSION                                                 {;}
      | EXPRESSION opt_greater EXPRESSION                                                     {;}
      | EXPRESSION opt_greater_equal EXPRESSION                                               {;}
      | EXPRESSION opt_equal EXPRESSION                                                       {;}
      | EXPRESSION opt_not_equal EXPRESSION                                                   {;}
      | EXPRESSION opt_and EXPRESSION                                                         {;}
      | EXPRESSION opt_or EXPRESSION                                                          {;}
      | opt_not EXPRESSION                                                                    {;}
      | vip_New opt_left_parentheses identifier opt_right_parentheses                         {;}
      | vip_NewArray opt_left_parentheses EXPRESSION opt_coma TYPE opt_right_parentheses      {;}
      | vip_ReadInteger opt_left_parentheses opt_right_parentheses                            {;}
      | vip_ReadLine opt_left_parentheses opt_right_parentheses                               {;}
      | vip_Malloc opt_left_parentheses EXPRESSION opt_right_parentheses                      {;}
      ;
VALUE 
      : identifier            {;}
      | EXPRESSION  VALUE_P   {;}
      ;


VALUE_P     
      : opt_dot identifier                                  {;}
      | opt_left_bracket EXPRESSION opt_right_bracket       {;}
      ;
CALL  
      : identifier opt_left_parentheses ACTUAL opt_right_parentheses                        {;}
      | EXPRESSION opt_dot identifier opt_left_parentheses ACTUAL opt_right_parentheses     {;}
      | EXPRESSION opt_dot LIB_CALL opt_left_parentheses ACTUAL opt_right_parentheses       {;}
      ;

LIB_CALL  
      : vip_GetByte opt_left_parentheses EXPRESSION opt_right_parentheses                         {;}
      | vip_SetByte opt_left_parentheses EXPRESSION opt_coma EXPRESSION opt_right_parentheses     {;}
      ;

ACTUAL  
      : EXPRESSION_PLUS       {;}
      | %empty                {;}
      ;

CONST 
      : num_int     {;}
      | num_hex     {;}
      | num_double  {;}
      | val_bool    {;}
      | val_string  {;}
      | vip_null    {;}    
      ;

ERR
      : error opt_left_brace  {yyerrok;}
      | error opt_right_brace  {yyerrok;}
      | error opt_left_bracket  {yyerrok;}
      | error opt_right_bracket  {yyerrok;}
      | error opt_left_parentheses  {yyerrok;}
      | error opt_right_parentheses  {yyerrok;}
      | error opt_semicolon   {yyerrok;}
      | error VARIABLE  {yyerrok;}

%%

void yyerror(char * s){
      printf("Syntax error in line %3d and column %3d - Not expecting '%s'\n", yylineno, yycolumnlineno, yytext);
}

int ParseFile(char * filePath){
      yycolumnlineno = 0;
      //yydebug = 1;
      FILE * inputFile;
      if (!(inputFile = fopen(filePath, "r"))) return -1; // Could not open file
      yyin = inputFile;
      return yyparse();
}

int ParseExpression(){
      yycolumnlineno = 0;
      return yyparse();
}