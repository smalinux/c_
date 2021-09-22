/*
Reread after 6.2: page  134
Remember from subsection 6.2 that in addition to holding a valid address, pointers
may also be null or indeterminate.

=
Skipped: CHALLENGE 12   (text processor)
=
Read later:
https://stackoverflow.com/q/3965279/5688267
https://stackoverflow.com/a/1461449/5688267
https://stackoverflow.com/questions/1461432/what-is-array-to-pointer-decay/1461449#1461449
https://stackoverflow.com/questions/3965279/opaque-c-structs-various-ways-to-declare-them
https://www.google.com/search?q=opaque+structures&oq=opaque+structures
https://www.google.com/search?q=array-to-pointer+decay
Google: Pure Functions


*/

#include <stdio.h>

struct mystruct {
   int x;
   int y;
};

void double_swap (double *p1, double *p2) {
   double tmp = *p1;
   *p1 = *p2;
   *p2 = tmp;
}

// arr[size] for declarations in C would decay into a pointer...
//int arr_sum(size_t size, int const *arr) {
int arr_sum(size_t size, int const arr[size]) {
   int mysum = 0;
   for(int i = 0; i < size; ++i) {
      mysum += *(arr+i);
   }
   return mysum;
}

int my_diff(int x, int y) {
   if( x > y) // one level recursion inspired from ModernC book timespec_diff function
      return my_diff(y, x);
   else {
      return y-x;
   }
}

int main() {

   {
      int x = 55;
      int *p_x = &x; // try void *p_x instead of int
      *p_x = 44;
      printf("hi %d\n", *p_x);
   }

   {
      double x1 = 44, x2 = 55;
      double_swap(&x1, &x2);
      printf("x1 = %f, x2 = %f\n", x1, x2);
   }

   {
      // Takeaway 2.11.1.1
      // Using * with an indeterminate or null pointer has undefined behavior.
      /*  ========= delete this line
      int* x = 55;
      int* y = NULL;
      printf("%d %d", *x, *y);
      ==== delete this line */
   }

   {
      // task: make a function the sum all elements of the array.
      const int len = 10;
      int my_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int x = arr_sum(10, my_arr);
      printf("The size of the array = %d\n", x);

      printf("The last element of the array = %d\n", *(my_arr+len-1));
   }

   { // reread 11.1.5: null pointers. page 139
      double const*const nix = 0;
      double const*const nax = nix;
   }

   {
      struct mystruct str = { .x = 44, .y = 55 };
      struct mystruct *p_str = &str;

      printf("str:\n\tx = %d, y = %d\n", str.x, str.y);

      //    p_str->x  == (*p_str).x
      //    no one use 2nd style
      printf("str:\n\tx = %d, y = %d\n", p_str->x, (*p_str).y);

   }

   {
      printf("my_diff(5, 11) = %d\n", my_diff(5, 11));
      printf("my_diff(11, 5) = %d\n", my_diff(11, 5));
   }

   {
      // 11.3.1. Array and pointer access are the same.
      int my_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int* p_i = &my_arr[0];

      printf("5th element: %d\n", p_i[4]);
   }

}
