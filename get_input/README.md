# get_input function
This function is supposed to take input from the user.
## How to use
This function takes a char** and a size_t, the char** is the address of the string you want to put the input in.
The size_t is the buffer length. Just put in how much you think the user will put in because that will lessen the amount of times the function calls realloc() which can get expensive.
## Example
```
char *input;
printf("What is your name: ");
size_t name_len = get_input(&input, 8);
printf("Hello %s!\n Your name is %d letters long!\n", input, name_len);
free(input)
```
This example is from the main.c function, to use it run make and run the example executable
```
$ make
$ ./example
```
