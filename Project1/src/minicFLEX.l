%x quote comment
%{
#include "minic.h"
%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]*
VIP		void|int|double|bool|string|class|interface|null|this|extends|implements|for|while|if|else|return|break|New|NewArray
IDF		[a-zA-Z][a-zA-Z_]*
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")*
BOOL	true|false
COMM	("/*"([^*]|(\*+[^*/]))*\*+\/)|"//".*
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
{OPT}						return OPERATOR;
\"							BEGIN(quote);
<quote>\"					{BEGIN(0); return STRING;}
<quote>[^"\n]*\n+			{BEGIN(0); yyAddText(); return ERROR_STRING;} // Not valid string...
<quote><<EOF>>				{BEGIN(0); return ERROR_STRING;} // Not valid string...
<quote>[^"\n]*				yyAddText();
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