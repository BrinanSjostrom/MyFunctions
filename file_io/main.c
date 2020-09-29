#include <stdio.h>
#include <stdlib.h>
#include "file_io.h"

int main()
{
	char *file_contents;
	read_file("test.txt", &file_contents);
	printf("%s", file_contents);
	free(file_contents);
return 0;
}
