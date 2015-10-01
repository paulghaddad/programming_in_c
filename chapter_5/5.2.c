#include <stdio.h>

int main(void)
{
  int n;

  printf("TABLE OF SQUARED VALUES\n\n");
  printf(" n                  n^2\n");
  printf("-----------------------\n");

  for ( n = 1; n <= 10; n++ )
  {
    printf("%2i                 %3i\n", n, n*n);
  }

  printf("\n");

  return 0;
}
