#include <stdio.h>

#define ABSOLUTE_VALUE(x) ( (x) >= 0 ? x : -(x))

int main (void)
{
  int x = 1;
  int y = -1;

  printf("The absolute value of %d is: %d\n", x, ABSOLUTE_VALUE(x + 1));

  printf("The absolute value of %d is: %d\n", y, ABSOLUTE_VALUE(y - 1));

  return 0;
}
