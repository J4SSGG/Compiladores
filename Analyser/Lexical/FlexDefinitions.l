%x quote comment
%{

// Tokens provided by Bison (which is the Sintactic analyser)
#include "../Sintactic/Parser.h"
extern void yyerror(char * s);
// LexicalAnalyser functions
void yyAddText();
char * yystring;

/*int yycol;
void ToLowerCase(char * word);
void ToUpperCase(char * word);
char * FileOut(char * FileInput);*/

%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]+
IDF		[a-zA-Z][_0-9a-zA-Z]*
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")?
BOOL	true|false
COMM	"//".*
%%
{NWL}						;
void						return vip_void;
int							return vip_int;
double						return vip_double;
bool						return vip_bool;
string						return vip_string;
class						return vip_class;
interface					return vip_interface;
null						return vip_null;
this						return vip_this;
extends						return vip_extends;
implements					return vip_implements;
for							return vip_for;
while						return vip_while;
if							return vip_if;
else						return vip_else;
return						return vip_return;
break						return vip_break;
New							return vip_New;
NewArray					return vip_NewArray;
Print						return vip_Print;
ReadInteger					return vip_ReadInteger;
ReadLine					return vip_ReadLine;
Malloc						return vip_Malloc;
{BOOL}						return val_bool;
{IDF}						return identifier;
{ESP}						;
{INT}						return num_int;
{HEX}						return num_hex;
{DBL}|{DBL}{EXP}{INT}		return num_double;
"/*"						BEGIN(comment);
<comment>"*/"				BEGIN(INITIAL);
<comment>([^*]|\n)+|.		yyAddText();
<comment><<EOF>>			{BEGIN(INITIAL); yyerror("Comment unclosed");}
{COMM}						;			
"+"							return opt_plus;
"-"							return opt_minus;
"*"							return opt_times;
"/"							return opt_divide;
"%"							return opt_mod;
"<"							return opt_lower;
"<="						return opt_lower_equal;
">"							return opt_greater;
">="						return opt_greater_equal;
"="							return opt_assign;
"=="						return opt_equal;
"!="						return opt_not_equal;
"&&"						return opt_and;
"||"						return opt_or;
"!"							return opt_not;
";"							return opt_semicolon;
"."							return opt_dot;
","							return opt_coma;
"["							return opt_left_bracket;
"]"							return opt_right_bracket;
"{"							return opt_left_brace;
"}"							return opt_right_brace;
"("							return opt_left_parentheses;
")"							return opt_right_parentheses;
"[]"						return opt_brackets;
"()"						return opt_parentheses;
"{}"						return opt_braces;
\".*\"						return val_string;
.							;
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