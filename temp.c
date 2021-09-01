void
f (int i)
{
  puts ("fizz");
} void

b (int i)
{
  puts ("buzz");
} void

fb (int i)
{
  puts ("fizzbuzz");
} void

p (int i)
{
  printf ("%d\n", i);
} void (*fbl[]) (int) = { fb, p, p, f, p, b, f, p, p, f, b, p, f, p, p };

for (int i = 1; i <= 100; i++)
  fbl[i % 15] (i);
