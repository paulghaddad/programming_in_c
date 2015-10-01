#include <stdio.h>

int main(void)
{
  float x = 2.55;

  float result = 3*x*x*x - 5*x*x + 6;

  printf("The value of the polynomial is %.2f\n", result);

  return 0;
}
