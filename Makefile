all:
	gcc atomic.c -o atomic.o -pthread
	gcc ca.c -o ca.o # compound assignment
	gcc expressions.c -o expressions.o
	gcc list.c -o list.o
	gcc main.c -o main.o
	gcc values.c -o values.o
	gcc -Wall -Wextra modernc_functions.c -o modernc_functions.o
clean:
	rm *.o
