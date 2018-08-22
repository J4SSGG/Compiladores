%{
#include "miniCS.h"
%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]*
VIP		void|int|double|bool|string|class|interface|null|this|extends|implements|for|while|if|else|return|break|New|NewArray
IDF		[a-zA-Z][a-zA-Z]{0,30}
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")
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
{DBL}|{DBL}{EXP}{DBL}		return DOUBLE;
{COMM}						return IGNORE;
{OPT}						return OPERATOR;
\"(\\.|[^"\\])*\"			return TEXT;
.							return ERROR;
%%
int yywrap(void)
{
	return 1;
}