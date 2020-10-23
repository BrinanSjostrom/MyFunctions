#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_input.h"

size_t get_input(char **input, const size_t buffer_size)
{
	char buffer[buffer_size + 1];						// Buffer (size is indicated by the programmer)
	memset(buffer, 0, sizeof(buffer));			// Sets buffer to all 0s
	size_t size_of_input = 1;								// Inits size of the user input
	unsigned short int buffer_index;				// This variable is used to track the index were at
	*input = (char*)malloc(size_of_input);	//	Allocates space for the input
	strcpy(*input, "");

	while(1)
	{
		char ch = fgetc(stdin);
		if(ch == '\n')																					// Turns buffer into workable string
			ch = '\0';
		buffer[buffer_index] = ch;
		buffer_index++;
		if(ch == '\0'){																					// checks to see if its the end of stdin
			size_of_input += strlen(buffer);
			*input = (char*)realloc(*input, size_of_input);
			strcat(*input, buffer);
			return size_of_input - 1;
		}
		else if(buffer_index == buffer_size)										// checks to see if the buffer is maxed out
		{
			buffer[buffer_size] = '\0';
			size_of_input += buffer_size;
			*input = (char*)realloc(*input, size_of_input);
			strcat(*input, buffer);
			buffer_index = 0;
		}
	}
}
