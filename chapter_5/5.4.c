#include <stdio.h>

int main(void)
{
  printf("TABLE OF FACTORIALS\n\n");
  printf(" n               n!\n");
  printf("-------------------\n");

  int number_of_factorials, n;

  for (n = 1; n <= 10; n++) 
  {
    int i, sum;

    for ( i = 1, sum = 1; i <= n; i++ )
    {
      sum *= i;
    }
    printf("%2i            %i\n", n, sum);
  }

  return 0;
}
