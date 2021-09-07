#include <stdio.h>

int main(void) {
   /* All sizeof pointer on any data type is equal.
    * 8 | 16 | 32 | 64
    * depend on your architecture
    */
   int *ptr_i;
   double *ptr_d;
   if(sizeof(ptr_i) == sizeof(ptr_d))
      puts("True");
}
