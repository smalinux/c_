/*
 * TODO
 * look at the impl of circular_resize(circular *c, size_t max_len)
 * man$ memcpy
 * man$ memmove
 */
#include <stdio.h>
#include "circular.h"

int main(void) {

   // create
   circular *my_c;
   my_c = circular_new(10);

   // add elements
   my_c = circular_append(my_c, 55);
   my_c = circular_append(my_c, 44);
   my_c = circular_append(my_c, 555);
   my_c = circular_append(my_c, 100);

   printf("Lenght: %lu\n", circular_getlength(my_c));
   printf("Pos[0] = %f\n", *circular_element(my_c, 0));

   circular_fput(my_c, stdout);

   // revert new
   circular_delete(my_c);
}
