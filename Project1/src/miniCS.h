
#define RESERVED 1
#define IDENTIFIER 2
#define INTEGER 3
#define DOUBLE 4
#define HEXADECIMAL 5
#define BOOL 6
#define COMMIT 7
#define OPERATOR 8
#define ERROR 9
#define IGNORE 10
#define NEW_LINE 11
#define TEXT 12
extern int yylex();
extern int yylineno;
extern char * yytext;
extern void yyset_in(FILE * in_str);
int yycol;
void ToLowerCase(char * word);
void ToUpperCase(char * word);