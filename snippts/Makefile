all:
	-gcc temp.c -o temp.o
	gcc -Wall -Wextra modernc_functions.c -o modernc_functions.o
	gcc atomic.c -o atomic.o -pthread
	gcc ca.c -o ca.o # compound assignment
	gcc comments.c -o comments.o
	gcc expressions.c -o expressions.o
	gcc format.c -o format.o
	gcc linker.c -o linker.o
	gcc list.c -o list.o
	gcc main.c -o main.o
	gcc memleak.c -o memleak.o -fsanitize=address
	gcc modernc_pointers.c -o modernc_pointers.o
	gcc monkey_func_declaration.c -o monkey_func_declaration.o
	gcc shadowed.c -o shadowed.o
	gcc shadowed_2.c -o shadowed_2.o
	gcc shadowed_3.c -o shadowed_3.o
	gcc sizeOfPointer.c -o sizeOfPointer.o
	gcc test_smalib.c -o test_smalib.o
	gcc values.c -o values.o
clean:
	rm *.o
	rm *.out
