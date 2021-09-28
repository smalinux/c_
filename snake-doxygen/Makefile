default: build doc

build:
	gcc -o snake src/main.c src/backend.c src/frontend.c -lncurses

run: build
	./snake

tests:
	checkmk test/test.ts > test/test.c
	gcc -o run_tests src/backend.c src/backend.h test/test.c -lncurses -lcheck
	./run_tests

doc:
	doxygen Doxyconfig

clean:
	rm snake run_tests
