#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_input.h"

size_t get_input(char **input, const size_t buffer_size)
{
	char buffer[buffer_size + 1];
	int buffer_index = 0;

	size_t input_size = 1;
	*input = (char*)malloc(input_size);
	strcpy(*input, "");


	while( 1 )
	{
		char ch = fgetc(stdin);
		if( ch == '\n' )
			ch = '\0';
		buffer[buffer_index] = ch;
		buffer_index++;

		if( ch == '\0' ){
			input_size += strlen(buffer);
			*input = (char*)realloc(*input, input_size);
			strcat(*input, buffer);
			return input_size - 1;
		}
		else if( strlen(buffer) == buffer_size ){
			input_size += buffer_size;
			*input = (char*)realloc(*input, input_size);
			strcat(*input, buffer);
			buffer_index = 0;
		}
	}
}
