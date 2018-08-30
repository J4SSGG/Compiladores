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
			return 1;
		}
		// Set the file reference to flex.
		yyset_in(fr); 
	}else{
		printf("INVALID PATH '%s'", av);
		return 1;
	}

	// Some control variables..
	int yycol = 1;
	int value = yylex(); // value (or token if applicable) returned by flex
	int token = 0; // input-lines counter
	int hasError = 0; // errors in file?
	
	// Write cs tokens file ...
	FILE * fw;
	char * newName = FileOut(av);
	if (!(fw = fopen(newName, "wb")))
	{
		printf("I can't create or open the file '%s'", newName);
		return 1;
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
				printf("Line: %5d - Columns: %3d to %3zu >>	STRING:		     %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "Line: %5d - Columns: %3d to %3zu >>	STRING:		     %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				break;
			case ERROR:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Unrecognized: %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Unrecognized: %s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				hasError += 1;
				break;
			case ERROR_COMMENT:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Invalid: comment unclosed\n", yylineno, yycol, yycol + strlen(yytext));
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Invalid: comment: unclosed", yylineno, yycol, yycol + strlen(yytext));
				yycol += strlen(yytext);
				hasError += 1;
				break;
			case ERROR_STRING:
				printf("<<	ERRROR	>>	Line: %5d - Columns: %3d to %3zu >>	 Invalid String: \"%s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				fprintf(fw, "<<	ERRROR	>>	Line: %5d - Columns %3d to %3zu >>	 Invalid String: \"%s\n", yylineno, yycol, yycol + strlen(yytext), yytext);
				yycol += strlen(yytext);
				hasError += 1;
				break;
		}
		
		value = yylex();
	}
	
	//Close file
	fclose(fw);
	yylineno = 1;
	return hasError;
}

char * FileOut(char * FileInput){
	int period = -1;
	for (int i = 0; i < strlen(FileInput); i++){
		period++;
		if(FileInput[i] == 46){
			break;
		}
		
	}
	char * out = malloc(period + 4);

	for (int i = 0; i < period; i++){
		out[i] = FileInput[i];
	}

	out[period] = 46;
	out[period + 1] = 'o';
	out[period + 2] = 'u';
	out[period + 3] = 't';
	return out;
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