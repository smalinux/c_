#include <stdio.h>
#include "smalib.h"

int main(void) {

   int *x = (int*)smalib_new(Smalib);
   printf("%d\n", *x);
}
