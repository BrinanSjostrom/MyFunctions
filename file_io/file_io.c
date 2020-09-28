#include <stdio.h>
#include <stdlib.h>
#include "file_io.h"

size_t read_file(char *file_path, char **file_contents)
{
	size_t file_size = 1;
	*file_contents = (char*)malloc(file_size);
	FILE *fp = fopen(file_path, "r");
	while(1)
	{
		char ch = fgetc(fp);
		if(ch == EOF){
			fclose(fp);
			return file_size;
		}
		*file_contents = (char*)realloc(*file_contents, ++file_size);
		(*file_contents)[file_size - 2] = ch;
	}
}
