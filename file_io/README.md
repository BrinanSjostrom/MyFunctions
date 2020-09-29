# file_io
This code does file input output
## Using
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
This function returns the size of the file plus 1.
The first argument is a string or char* of the file path.
The second argument is the address of a char* that will hold the file contents themself.
```
size_t size_of_file = read_file(file_path, &file_contents);
```
It WILL NOT return a string so if you want to put the null byte at the end you can do it yourself. So do this
```
file_contents[size_of_file - 1] = '\0'
```
