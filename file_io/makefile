all: main.o file_io.o
	gcc main.o file_io.o -o example
main.o: main.c
	gcc -c main.c
file_io.o: file_io.c
	gcc -c file_io.c
clean:
	rm *.o example
