#include <stdio.h>

#define MIN(a,b) (((a) > (b)) ? (b) : (a))

int main (void)
{
  int x = 1;
  int y = 2;

  printf("The minimum of %d and %d is: %d\n", x, y, MIN(x,y));

  return 0;
}
