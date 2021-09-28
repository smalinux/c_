default: build

build:
	gcc -o snake src/main.c src/backend.c src/frontend.c -lncurses

run: build
	./snake

tests:
	checkmk test/test.ts > test/test.c
	gcc -o run_tests src/backend.c src/backend.h test/test.c -lncurses -lcheck
	./run_tests

astyle:
	astyle -A3 -s8 -r -v  \*.c \*.h

clean_astyle:
	find . -name "*.orig" -type f -delete # delete *.orig files
	git restore .

clean:
	rm snake run_tests
