/* Reference: https://en.cppreference.com/w/c/language/function_declaration
 */
#include <stdio.h>

int (*thr_int(const void* p))[3];


int main(void) {
   int lolo_func(int x); // Function declarations (unlike definitions) may appear at block scope as well as file scope.
   printf("== %d\n", lolo_func(2));

   // --------------------------
   // Front-End straightforward
   int *arr_i = (int*)thr_int(arr_i);
   printf("%d - %d - %d\n", arr_i[0], arr_i[1], arr_i[2]);
   // --------------------------

}

int lolo_func(int x) {
   return x*x*x;
}

// ,english int (*thr_int(const void* p))[3]
int (*thr_int(const void* p))[3] {
   int x[3] = {11, 22, 33}; // malloc later

   p = x;

   return (int(*)[3])p;
}
