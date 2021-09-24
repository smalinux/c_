/* NOTE
 * want more examples?
 * dito https://github.com/siu/minunit/blob/master/minunit_example.c
 */
#include "minunit.h"

void test_setup(void) { }
void test_teardown(void) { }

int add(int x, int y) {
   return x+y;
}

/* dito. list your unit tests impl.. */
void sma_unit_1(void) {
	mu_assert_int_eq(add(5, 4), 7);
}

MU_TEST_SUITE(test_suite) {
	MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

   /* dito. list your func... */
	MU_RUN_TEST(sma_unit_1);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

