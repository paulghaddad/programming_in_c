#include <stdio.h>

int main(void)
{
  int n, triangular_number;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n                    Value\n");
  printf("---------------------------\n");

  for ( n = 5; n <= 50; n += 5 )
  {
    triangular_number = n * (n + 1) / 2;
    printf("%2i                    %i\n", n, triangular_number);
  }

  return 0;
}
