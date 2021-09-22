// Function declarations at block scope can use extern or none at all.
// Function declarations at file scope can use extern or static.
#include <stdio.h>

int main(void)
{
   int func1(int x);
   extern int func1(int x);
   puts("hey!");
}
