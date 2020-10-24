#include <stdio.h>
#include <stdlib.h>
#include "get_input.h"

int main()
{
	char *input;
	char *age;
	printf("What is your name: ");
	size_t name_len = get_input(&input, 1);
	printf("How old are you: ");
	get_input(&age, 1);
	printf("\n\n\nHello %s!\nYour name is %d letters long!\nYou are %s years old!\n", input, name_len, age);
	free(input);
	free(age);
	return 0;
}
