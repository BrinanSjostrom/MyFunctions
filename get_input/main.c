#include <stdio.h>
#include <stdlib.h>
#include "get_input.h"

int main()
{
	char *input;
	printf("What is your name: ");
	size_t name_len = get_input(&input, 10);
	printf("\nHello %s!\nYour name is %d letters long!\n", input, name_len);
	free(input);
	return 0;
}
