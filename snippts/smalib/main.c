#include <stdio.h>
#include <stdlib.h>

#include "smalib.h"
#include "oop.h"

/* ---------------------------------------------------------- */
int main(void) {
   int arr[10];
   printf("%ld\n", arrLen(arr));

   // oop.h
   Greet_Class *S = malloc(sizeof(S));
   say_hii(S);
   Greet_setter(S);
   int y = Greet_getter(S);
   printf("Greet_getter = %d\n", y);
}
