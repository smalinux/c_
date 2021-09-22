/*
Read later:
=========================
   * exit, _Exit, quick_exit, and abort 8.7
   • goto 13.2.2 and 14.5
   * setjmp and longjmp 17.5
   * Certain events in the execution environment or calls to the function raise may raise signals that pass control to a specialized function, a signal handler.

==============================================================

storage specifier:
   extern

   <stdnoreturn.h>
   strtod function
*/

#include <stdio.h>
#include <stdlib.h>

void x(void) {
   printf("hi\n");
   return;
   printf("hii\n");
}

int main(void) {

   x();

   //return EXIT_FAILURE;
   //return EXIT_SUCCESS; // echo $?
   exit(5); // echo $?
}
