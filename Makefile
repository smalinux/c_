all:
	indent *.c
	indent *.h
	gcc main.c -o main.o
	gcc ca.c -o ca.o # compound assignment
