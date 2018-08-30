%x quote comment
%{
#include "minic.h"
%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]*
VIP		void|int|double|bool|string|class|interface|null|this|extends|implements|for|while|if|else|return|break|New|NewArray
IDF		[a-zA-Z][_0-9a-zA-Z]*
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")?
BOOL	true|false
COMM	"//".*
OPT		"+"|"-"|"*"|"/"|"%"|"<"|"<="|">"|">"|"="|"=="|"!="|"&&"|"\|\|"|"!"|";"|"."|","|"["|"]"|"{"|"}"|"("|")"|"[]"|"()"|"{}"
%%
{NWL}						return NEW_LINE;
{VIP}						return RESERVED;
{BOOL}						return BOOL;
{IDF}						return IDENTIFIER;
{ESP}						return IGNORE;
{INT}						return INTEGER;
{HEX}						return HEXADECIMAL;
{DBL}|{DBL}{EXP}{INT}		return DOUBLE;
"/*"						BEGIN(comment);
<comment>"*/"				{BEGIN(INITIAL);}
<comment>([^*]|\n)+|.		yyAddText();
<comment><<EOF>>			{BEGIN(INITIAL); return ERROR_COMMENT;}
{COMM}						return IGNORE;			
{OPT}						return OPERATOR;
\".*\"						return STRING;
.							return ERROR;
%%
int yywrap(void)
{
	return 1;
}

void yyAddText(){
	char * newString = malloc(strlen(yytext));
	strcpy(newString, yytext);
	yystring = newString;
}