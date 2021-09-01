/* Read all: */
// usr/include/stdint.h
// <stdint.h>
#include "stdio.h"
#include <stdint.h>

struct s
{
  struct s *x, *y;
  int i;
};
static struct s x;
static struct s y = {.x = &x };
static struct s x = {.y = &y,.i = 123 };

int
main (void)
{
  printf ("%d", x.y->x->y->x->y->x->i);
}
