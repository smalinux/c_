/*
 * ModernC chapter 4
 *
 * lots of Local scope?
 * every single local block freestanding & contains all its local vars..
 *
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <iso646.h>

int main() {

   {
      printf("====> Takeaway 1.4.1.6 <====\n");
      // In the case of overflow, unsigned arithmetic wraps around.

      size_t a = 0-1;
      unsigned int b = 0-1;
      printf("%lu\n", a); // guess what ? :)
      printf("%u\n", b); // guess what ? :)
   }

   {
      size_t a = SIZE_MAX + 5; // 4 (SIZE_MAX+1 == 0) + the remainder
      printf("%lu\n", a);
   }

   {
      /* ===================================================
       * Never modify more than one object in a statement. |
      ====================================================*/
      int a, b, c, d;
      a = b = c = d = 5;

      a = b = c += ++d; // ModernC: Don’t do that unless you want to obfuscate your code.

      printf("%d %d %d %d\n", a, b, c, d);
      printf("a = %d\n", a++); // 11
   }

   {
      //#include <iso646.h>
      printf("not_eq = %d\n", 5 not_eq 6);
   }

}
