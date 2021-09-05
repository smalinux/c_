all:
	#gcc temp.c -o temp.o
	gcc -Wall -Wextra modernc_functions.c -o modernc_functions.o
	gcc atomic.c -o atomic.o -pthread
	gcc ca.c -o ca.o # compound assignment
	gcc expressions.c -o expressions.o
	gcc linker.c -o linker.o
	gcc list.c -o list.o
	gcc main.c -o main.o
	gcc memleak.c -o memleak.o -fsanitize=address
	gcc modernc_pointers.c -o modernc_pointers.o
	gcc shadowed.c -o shadowed.o
	gcc shadowed_2.c -o shadowed_2.o
	gcc shadowed_3.c -o shadowed_3.o
	gcc values.c -o values.o
clean:
	rm *.o
	rm *.out
