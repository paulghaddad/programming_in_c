#include <stdio.h>

int main(void)
{
  double numerator = 3.31e-8 * 2.01e-7;
  double denominator = 7.16e-6 + 2.01e-8;

  printf("The value of the fraction is %g\n", numerator / denominator);

  return 0;
}
