/*
@References
   https://en.cppreference.com/w/c/io/fprintf
   printf(1)
   sprintf(1)
   vfprintf(3)
   wprintf(3)
   fputs

   Secrets of “printf” Professor Don Colton - Brigham Young University Hawaii
   IBM printf() — Print Formatted Characters

@Sublinks
   https://en.cppreference.com/w/c/language/conversion#Default_argument_promotions
   https://en.cppreference.com/w/c/error/set_constraint_handler_s
   https://en.cppreference.com/w/c/language/eval_order

sprintf_s ?? https://stackoverflow.com/q/4828228/5688267
*/

#include <stdio.h>
#include <math.h>
#define LINE puts("\n======================================================\n")

int main(void) {

   {
      char buf[200];
      int c;

      // sprintf
      c = sprintf(buf, "%s", "");
      puts(buf);

      // check
      (c) ? puts("Written") : puts("No.");

      // snprintf
      snprintf(buf, sizeof(buf),  "Hi Sohaib %d", 1994);
      puts(buf);
   }

   {
      // trick
      // Calling snprintf with zero bufsz and null pointer for buffer is
      // useful to determine the necessary buffer size to contain the output:
      const char *fmt = "sqrt(2) = %f";
      int sz = snprintf(NULL, 0, fmt, sqrt(2));
      char buf[sz + 1]; // note +1 for terminating null byte
      snprintf(buf, sizeof buf, fmt, sqrt(2));
      puts(buf);
   }

   {
      LINE;
      long long x = 55;
      signed char cc = 'S';

      printf("%i\n", 55);
      printf("%.6i\n", 55);
      printf("%+i\n", -55);
      printf("==%.0i\n", -55);

      printf("x%.0lli\n", x);

      printf("cc%hhi\n", cc);

      // convert int to a single character.
      printf("c %c\n", 83); // c -> int

      // convert unsinged int to HEX
      printf("HEX %X \n", 500);
      printf("HEX %x \n", 500);

      LINE;

      size_t S = 500;
      //printf("HEX %X \n", S);
      printf("HEX %zX \n", S);

      LINE;
      /*
       * integer value or * that specifies minimum field width. The result is padded with space characters (by default), if required, on the left when right-justified, or on the right if left-justified. In the case when * is used, the width is specified by an additional argument of type int, which appears before the argument to be converted and the argument supplying precision if one is supplied. If the value of the argument is negative, it results with the - flag specified and positive field width. (Note: This is the minimum width: The value is never truncated.)
       */
      printf("int: %6d \n", 66); // right-justified
      printf("int: %*d \n", 6, 66);
      printf("int: %-6dhi \n", 66); // left-justified
      printf("int: %20d \n", 66);
      printf("int: %*d \n", 20, 66);


      LINE;

      puts(".");
      /*
       * . followed by integer number or *, or neither that specifies precision of the conversion. In the case when * is used, the precision is specified by an additional argument of type int, which appears before the argument to be converted, but after the argument supplying minimum field width if one is supplied. If the value of this argument is negative, it is ignored. If neither a number nor * is used, the precision is taken as zero. See the table below for exact effects of precision.
       */
      printf("%.*d\n", 3, 44);

      LINE;

      // NaN

      LINE;
   }

   {
      const char* s = "Hello";
      printf("Strings - padding:\n");
      printf("\t.%10s.\n\t.%-10s.\n\t.%*s.\n", s, s, 10, s);
      printf("Strings - truncating:\n");
      printf("\t%.4s\n\t%.*s\n", s, 3, s);

      printf("Characters:\t%c %%\n", 65);

      printf("Integers\n");
      printf("Decimal:\t%i %d %.6i %i %.0i %+i %i\n", 1, 2, 3, 0, 0, 4, -4);
      printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
      printf("Octal:\t\t%o %#o %#o\n", 10, 10, 4);

      printf("Floating point\n");
      printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
      printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
      printf("Scientific:\t%E %e\n", 1.5, 1.5);
      printf("Hexadecimal:\t%a %A\n", 1.5, 1.5);

   }

}
