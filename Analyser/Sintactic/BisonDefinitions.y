%{
// Required to some functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../miniC#/source/Structures.h"
// Things Bison need to know of Flex...
extern int yylex();
extern FILE * yyin;
extern int yylineno;
extern char * yytext;
extern int yydebug;

// Variables
int yycolumnlineno;
int minContext;
int currentContext;
int CONTEXT;
char * A_TYPE;
char * A_ID;
char * A_ARGS;
char * A_VAR;
char * T_TYPE;
char * T_ID;
int F_ARG;
// Syntactic analyser functions
int ParseExpression();
int ParseFile(char * path);
void yyerror(char * s);
void AddVar(int con);
void AddArg(char * extra);
void AddFunction();
void addContext();
void freeContext();
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
%token vip_const
%token<stringVal> identifier
%token<intVal>    num_int
%token<intVal>    num_hex
%token<doubleVal> num_double
%token<stringVal> val_string
%token<intVal>    val_bool
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

%type<stringVal> TYPE VARIABLE

%left opt_assign
%left opt_or
%left opt_and
%nonassoc opt_equal opt_not_equal
%left opt_lower opt_lower_equal opt_greater opt_greater_equal
%left opt_plus opt_minus
%left opt_times opt_divide opt_mod
%left opt_not
%left vip_else
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
      : vip_const TYPE identifier               {AddVar(1);}
      | TYPE identifier                         {AddVar(0);}
      ;

VARIABLE_PLUS
      : VARIABLE opt_coma {AddArg(",");} VARIABLE_PLUS      {;}
      | VARIABLE                                            {AddArg("");}
      ;

TYPE      
      : vip_int                                       {A_TYPE = newString("int");}
      | vip_double                                    {A_TYPE = newString("double");}
      | vip_bool                                      {A_TYPE = newString("bool");}
      | vip_string                                    {A_TYPE = newString("string");}  
      | TYPE opt_left_bracket opt_right_bracket       {A_TYPE = newString("ARRAY");}
      | identifier                                    {A_TYPE = newString(yylval.stringVal);}
      ;

FUNCTION_DECL 
      : TYPE identifier {T_TYPE = newString(A_TYPE); T_ID = newString(yylval.stringVal);} opt_left_parentheses {addContext(); } FORMALS opt_right_parentheses STMT_BLOCK {freeContext(); AddFunction(); }
      | vip_void identifier {T_TYPE = newString(A_TYPE); T_ID =newString("void");} opt_left_parentheses {addContext();} FORMALS opt_right_parentheses STMT_BLOCK         {freeContext(); AddFunction();}
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
      ContextStack = List();
      SymbolTable = List();
      Push(-1);
      addContext();
      F_ARG = 0;
      yycolumnlineno = 0;
      //yydebug = 1;
      FILE * inputFile;
      if (!(inputFile = fopen(filePath, "r"))) return -1; // Could not open file
      yyin = inputFile;
      int x = yyparse();
      //PrintList(SymbolTable);
      return x;
}

int ParseExpression(){
      yycolumnlineno = 0;
      return yyparse();
}

void AddVar(int con)
{
      for(int i = 0; i <= CONTEXT; i++)
      {
            if (SearchKeyInContext(SymbolTable, yylval.stringVal, i) == 1)
            {
                  printf("Linea: %d - Columna: %d -> La variable '%s' ya ha sido definido anteriormente...\n", yylineno, yycolumnlineno, yylval.stringVal);
                  return;
            }
      }
      InsertList(SymbolTable, yylval.stringVal, NULL, "var", A_TYPE, con, CONTEXT, NULL);
      A_VAR = newString(A_TYPE);
}

void AddArg(char * extra)
{
      if (!A_ARGS)
      {
            A_ARGS = newString(A_VAR);
            if(extra)
            {
                  strcat(A_ARGS, extra);
            }
            return;
      }
      
      strcat(A_ARGS, A_VAR);
      if(extra)
      {
            strcat(A_ARGS, extra);
      }
}

void AddFunction()
{
      for(int i = 0; i <= CONTEXT; i++)
      {
            if (SearchKeyInContext(SymbolTable, T_ID, i) == 1)
            {
                  printf("Linea: %d - Columna: %d -> El nombre de la funcion '%s' ya ha sido definido anteriormente...\n", yylineno, yycolumnlineno, yylval.stringVal);
                  return;
            }
      }
      InsertList(SymbolTable, T_ID, NULL, "func", T_TYPE, 0, CONTEXT, A_ARGS);
      A_VAR = newString(A_TYPE);
}

void addContext()
{
      int x = Peek() + 1;
      Push(x);
      CONTEXT = x;
}

void freeContext(){
      RemoveFromContext(SymbolTable, Pop());
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

      /* FUNCIONES DE LA LISTA */

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


char * newString(char * name)
{
    // create new char *
    if (!name) return NULL;
    char * str = malloc(sizeof(name));
    strcpy(str, name);
    return str;
}

struct list * List()
{
    struct list * newList =  (struct list *) malloc (sizeof(struct list));
    newList->head = Node();
    newList->tail = newList->head;
    return newList;
}
struct node * Node()
{
    struct node * newNode =  (struct node *) malloc (sizeof(struct node));
    newNode->value = 0;
    newNode->name = NULL;
    newNode->type = NULL;
    newNode->returnType= NULL;
    newNode->context = -1;
    newNode->isConst = 0;
    newNode->params = NULL;
    newNode->last = NULL;
    newNode->next = NULL;
    return newNode;
}

int InsertList(struct list * item, char * name, char * value, char * type, char * returnType, int con, int context, char * params)
{
      struct node * newNode =  Node();

      newNode->value = value;
      newNode->name = newString(name);
      newNode->type = newString(type);
      newNode->returnType = newString(returnType);
      newNode->context = context;
      newNode->params = newString(params);
      newNode->isConst = con;

      item->tail->next = newNode;
      newNode->last = item->tail;
      item->tail = newNode;

      return 1;

}

void PrintList(struct list * item){
      if (!item->head->next){
            printf("Lista vacia...\n");
            return;
      }
      struct node * current = item->head->next;
      while (current)
      {
            printf("------------------------------\n");
            printf("Key: %s\n", current->name);
            printf("Value: %s\n", current->value);
            printf("Type: %s\n", current->type);
            printf("Returns: %s\n", current->returnType);
            printf("Constant: %d\n", current->isConst);
            printf("Params: %s\n", current->params);
            printf("Context: %d\n", current->context);
            current = current->next;
      }
}

struct node * SearchList(struct list * item, char * name)
{
      if (!item->head->next){
            return NULL;
      }
      struct node * current = item->head->next;
      while (current)
      {
            if (strcmp(name, current->name) == 0)
            {
                  return current;
            }
            current = current->next;
      }
      return NULL;
}

int SearchKeyInContext(struct list * item, char * key, int context)
{
      if (!item->head->next){
            return 0;
      }
      struct node * current = item->head->next;
      while (current)
      {
            if (strcmp(key, current->name) == 0 && current->context == context)
            { 
                  return 1;
            }        
            current = current->next;
      }
      return 0;
}

void RemoveFromContext(struct list * item, int context)
{
      struct node * current = item->tail;
      while (current && current->context == context)
      {     
            current = current->last;
            item->tail = current;
            current->next = NULL;
      }
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

      /* FUNCIONES DE LA STACK */

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


void Push(int value)
{
      InsertList(ContextStack, NULL, NULL, NULL, NULL,-1,  value,  NULL);
}

int Pop(){
      int value = ContextStack->tail->context;
      ContextStack->tail->last = ContextStack->tail->last->last;
      ContextStack->tail = ContextStack->tail->last;
      return value;
}

int Peek(){
      return ContextStack->tail->context;
}

