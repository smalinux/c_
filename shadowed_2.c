/*
 * shadowed vs scope
 * extern === global scope
 *
 * https://stackoverflow.com/a/623279/5688267
 */
#include <stdio.h>

int x = 100;

int main(void) {
   int x = 50;
   printf("%d\n", x); // 50, shadowed line 6

   {
      int x = 4;
      printf("%d\n", x); // 4, shadowed line 9

      {
         extern int x;
         printf("%d\n", x); // 100
      }
   }

}
