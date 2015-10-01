#include <stdio.h>

int main(void)
{
  float degrees_f = 32.0;

  float degrees_c = (degrees_f - 32) / 1.8;

  printf("The value of %.1f in Celsius is %.1f\n", degrees_f, degrees_c);

  return 0;
}
