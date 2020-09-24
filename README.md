# MyFunctions
These are my functions for C that i like to use
## INFO
In each folder there should be a .c file a .h file as well as a README.md
## How to use(with gcc)
Compile the .c file into a .o
```
gcc -c example.c
```
This will output it to example.o.
Now all you have to do is include the .h in the file you want to use the function in.
```
#include "example.h"
```
Then link it all together.
```
gcc example.o main.o -o main.out
```
