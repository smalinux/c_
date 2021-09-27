#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

noreturn void hi(int i) {
   //exit(1);
}

int main(void)
{
   hi(55);

}
