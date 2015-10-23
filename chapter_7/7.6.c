#include <stdio.h>

int main(void)
{
  int fib_n0, fib_n1, fib_n2;

  fib_n0 = 0;
  fib_n1 = 1;

  printf("%i\n", fib_n0);
  printf("%i\n", fib_n1);

  for ( int i = 1; i < 14; ++i )
  {
    fib_n2 = fib_n0 + fib_n1;
    printf("%i\n", fib_n2);
    fib_n0 = fib_n1;
    fib_n1 = fib_n2;
  }

  return 0;
}
