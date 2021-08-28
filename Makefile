all:
	gcc main.c -o main.o
	#gcc list.c -o list.o
	gcc ca.c -o ca.o # compound assignment
	gcc expressions.c -o expressions.o
	gcc atomic.c -o atomic.o -pthread
	gcc cpp_project.cpp -lstdc++

clean:
	rm *.o
