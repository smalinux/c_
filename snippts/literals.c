#include <stdio.h>

char const A[] = { 'e', 'n', 'd', '\0', };
char const B[] = { 'e', 'n', 'd', '\0', };
char const* c = "end";
char const* d = "end";
char const* e = "friend";
char const* f = (char const[]){ 'e', 'n', 'd', '\0', };
char const* g = (char const[]){ 'e', 'n', 'd', '\0', };

int main(void) {
   printf("%d\n", &A[0] == &B[0]);

}
