/*
 * shadowed vs static
 * static -with- extern
 */
#include <stdio.h>

static int x = 100;

int main(void) {
   int x = 50;
   printf("%d\n", x); // 50, shadowed line 6

   {
      int x = 4;
      printf("%d\n", x); // 4, shadowed line 9

      {
         // TODO uncomment next line & resolve the error
         //extern int x;
         printf("%d\n", x); // 100
      }
   }

}
