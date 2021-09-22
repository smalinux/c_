/*
 * Reference:
 *    https://en.cppreference.com/w/c/language/scope
 *
 */
#include <stdio.h>


// The name space here is ordinary identifiers.

int a;   // file scope of name a begins here

void f(void)
{
    int a = 1; // the block scope of the name a begins here; hides file-scope a
    {
      int a = 2;         // the scope of the inner a begins here, outer a is hidden
      printf("%d\n", a); // inner a is in scope, prints 2
    }                    // the block scope of the inner a ends here
    printf("%d\n", a);   // the outer a is in scope, prints 1
}                        // the scope of the outer a ends here

void g(int a);   // name a has function prototype scope; hides file-scope a


int main(void) { }
