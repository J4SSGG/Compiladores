#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "minic.h"


int start(int ac, char * av) {
	// Checks if file is given...
	
	if (ac == 1)
	{
		// Creates file object...
		FILE *fr;
		if (!(fr = fopen(av, "r"))) // Checks if file exits and is readable...
		{
			printf("Error while open the file '%s'\n", av);
			return -1;
		}
		// Set the file reference to flex.
		yyset_in(fr); 
	}else{
		printf("INVALID PATH '%s'", av);
		return -1;
	}

	// Some control variables..
	int yycol = 1;
	int value = yylex(); // value (or token if applicable) returned by flex
	int token = 0; // input-lines counter
	int hasError = 0; // errors in file?
	// Write cs tokens file ...

	char * newName = malloc(strlen(av)+1);
	strcpy(newName, av);
	newName[strlen(av)-2] = 'o';
	newName[strlen(av)-1] = 'u';
	newName[strlen(av)] = 't';
	FILE * fw;
	if (!(fw = fopen(newName, "wb")))
	{
		printf("I can't create or open the file '%s'", newName);
		return -1;
	}
	
	// This loop iterates over every line read from the file, pass the line content to flex, and catch the outputs.
	while (value) {
		token++;
		switch (value){
			case IGNORE:
				yycol += strlen(yytext);
				break;
			case NEW_LINE:
				yycol = 1;
				break;
			case RESERVED:
				//ToLowerCase(yytext);
				printf("Line: %5d - Columns: %3d to %3zu >>	RESERVED:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	RESERVED:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case IDENTIFIER:
				//ToUpperCase(yytext);
				if(strlen(yytext) > 31){
					//truncate string
					yytext[31] = 0; //  This modifies the original pointer, IT DOES NOT MAKE A COPY. Only used this whether the complete value in yytext is not used in other places.
					printf("Line: %5d - Columns: %3d to %3zu >>	IDENTIFIER:		 %s		(TRUNCATED)\n", yylineno, yycol, yycol + strlen(yytext), yytext);
					fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	IDENTIFIER:		 %s		(TRUNCATED)\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				}
				else {
					printf("Line: %5d - Columns: %3d to %3zu >>	IDENTIFIER:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
					fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	IDENTIFIER:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				}
				yycol += strlen(yytext);
				break;
			case OPERATOR:
				printf("Line: %5d - Columns: %3d to %3zu >>	OPERATOR:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	OPERATOR:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case INTEGER:
				//ToLowerCase(yytext);
				printf("Line: %5d - Columns: %3d to %3zu >>	INTEGER:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	INTEGER:		 %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case DOUBLE:
				//ToLowerCase(yytext);
				printf("Line: %5d - Columns: %3d to %3zu >>	DOUBLE:		     %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	DOUBLE:		     %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case HEXADECIMAL:
				//ToLowerCase(yytext);
				printf("Line: %5d - Columns: %3d to %3zu >>	HEXA:		    %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	HEXA:		     %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case BOOL:
				printf("Line: %5d - Columns: %3d to %3zu >>	BOOLEAN:		    %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	BOOLEAN:		    %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case STRING:
				printf("Line: %5d - Columns: %3d to %3zu >>	STRING:		     \"%s\"\n", yylineno, yycol, yycol + strlen(yystring), yystring);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	STRING:		     \"%s\"\n", yylineno, yycol, yycol + strlen(yystring), yystring);
				yycol += strlen(yytext);
				break;
			case ERROR:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Unrecognized: %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Unrecognized: %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				hasError = 1;
				break;
			case ERROR_COMMENT:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Invalid: comment unclosed\n", yylineno, yycol, yycol + strlen(yytext));
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Invalid: comment: unclosed", yylineno, yycol, yycol + strlen(yytext));
				yycol += strlen(yytext);
				hasError = 1;
				break;
			case ERROR_STRING:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Invalid String: \"%s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Invalid String: \"%s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				hasError = 1;
				break;
		}
		
		value = yylex();
	}
	
	//Close file
	fclose(fw);

	// File had errors?
	if (hasError == 1){
		return -1;
	}	
	return 1;
}

//These may be useful ...
/*
void ToLowerCase(char * word){
	for (;*word;++word) *word = tolower(*word);
}

void ToUpperCase(char * word){
	for (;*word;++word) *word = toupper(*word);
}
*/