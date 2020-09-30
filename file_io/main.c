#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_io.h"

int main()
{

	_Bool option;
	printf("[0] Read test.txt\n");
	printf("[1] Write to test.txt\n");
	printf(">>> ");
	scanf("%d", &option);

	if(option == 0){	
		char *file_contents;
		size_t file_size;
		if(read_file("test.txt", &file_contents, &file_size))
			return 1;
	
		printf("%s", file_contents);
		free(file_contents);
	}
	else if(option == 1){
		if(write_file("test.txt", "This is a test", strlen("This is a test")))
			return 1;
	}
return 0;
}
