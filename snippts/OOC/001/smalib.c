#include "stdlib.h"

const void* Smalib;

void* smalib_new(const void* smalib) {
   int *p = malloc(sizeof(int));
   *p = 55;
   return p;
}
