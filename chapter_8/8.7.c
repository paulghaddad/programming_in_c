#include <stdio.h>

int main (void)
{
  long int x_to_the_n (int x, int n);

  printf("2 to the power of 2: %li\n", x_to_the_n (2, 2));
  printf("4 to the power of 4: %li\n", x_to_the_n (4, 4));
}

long int x_to_the_n (int x, int n)
{
  long int result = 1;

  while ( n > 0 )
  {
    result *= x;
    --n;
  }

  return result;
}
