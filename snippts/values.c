/*
The representation that a particular value has should in most cases not be
your concern; the compiler is there to organize the translation back
and forth between values and representations.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

   {
      unsigned char a = '`';
      printf("sss = %c\nvalue of a = %d\n", a, (int)a);
   }

   {
      size_t o = 077;      // octal, = 63
      printf("%lu\n", o);

      size_t x = 0xBEAF;   // 48815
      printf("%lu\n", x);

      puts("Hi, Sohaib");
   }

   return 0;
}
