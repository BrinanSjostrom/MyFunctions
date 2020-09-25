all: main.o get_input.o
	gcc main.o get_input.o -o example
main.o: main.c
	gcc -c main.c
get_input.o: get_input.c
	gcc -c get_input.c
clean:
	rm example *.o
