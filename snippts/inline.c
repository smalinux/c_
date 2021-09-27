/*
 * https://stackoverflow.com/a/1932371/5688267
 * C99 inline function in .c file:
 *    https://stackoverflow.com/q/16245521/5688267
 */

#include <stdio.h>
#include "inline.h"


int def_inline(int x, int y, int z);

int love(void);
int love(void);
int love(void);
int love(void);
int love(void);
int love(void);

int add(int x, int y);

inline int add(int x, int y) {
   return x+y;
}

int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);

inline int monkey(int x, int y) {
   return x+y+x+y;
}

int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);
int monkey(int x, int y);

/*
 * 🥵 "A non-static inline function cannot define a non-const function-local static and cannot refer to a file-scope static."
 */
static int x;
inline void f(void)
{
    static int n = 1; // error: non-const static in a non-static inline function
    int k = x; // error: non-static inline function accesses a static variable
}

int main(void) {

   printf("%d\n", add(5, 5));

   printf("%d\n", monkey(5, 5));

   printf("%d\n", def_inline(5, 5, 5));

   printf("%d\n", def_static(5, 5, 5));

   return 0;
}
