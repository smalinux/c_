/*
 * simple test for all smalib APIs
 */
#define DEBUG     // comment this line

#include <stdio.h>
#include "smalib.h"


int main(void) {
   {
      ERR();
      hi();
      ERR("WOW");
   }
}
