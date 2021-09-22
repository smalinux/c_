#include <stdio.h>

int* foo(void) {
    int a = 17; // a has automatic storage duration
    return &a;
}  // lifetime of a ends

int main(void) {
    int* p = foo(); // p points to an object past lifetime ("dangling pointer")
    int n = *p; // undefined behavior
}
