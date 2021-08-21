all:
	indent *.c
	indent *.h
	gcc main.c -o main.o
