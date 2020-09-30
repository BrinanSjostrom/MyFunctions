# file_io
This code does file input output

## Compiling
Just include the file_io.h in your main.c file
```
#include "file_io.h"
```
Compile the file_io.c file
```
gcc -c file_io.c
```
Then link the main.o and file_io.o file together
```
gcc main.o file_io.o -o example
```

### Using read_file()
This function returns a 1 or a 0. 1 is a failure and 0 is a success.
The first argument is a string or char* of the file path.
The second argument is the address of a char* that will hold the file contents themself.
The third argument is the address of the size of the file + 1.
```
int status = read_file(file_path, &file_contents, &size_of_file);
```
If you want to add the null byte at the end just do this in your code.
```
file_contents[size_of_file - 1] = '\0';
```
This will make the file_contents variable a string

### Using write_file()
This function returns a 1 or a 0. 1 is a failure and 0 is a success.
The first argument is a string or char* of the file path.
The second argument is a string or char* of the file contents you'd like to write to the file
The third argument is the size of the file contents. If the file content is a string you can just pass strlen(file_contents) into this and it'll work fine.
```
int status = write_file(file_path, file_contents, strlen(file_contents));
```
