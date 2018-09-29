#include <stdio.h>
#include "minic.h"


int main(int argc, char ** argv) {
	if (argc > 1){
		// File is given as argument
		ParseFile(argv[0]);
	}else{
		ParseExpression();
	}
}

//These may be useful
/*

char * ouputfileName(char * FileInput){
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

void ToLowerCase(char * word){
	for (;*word;++word) *word = tolower(*word);
}

void ToUpperCase(char * word){
	for (;*word;++word) *word = toupper(*word);
}
*/