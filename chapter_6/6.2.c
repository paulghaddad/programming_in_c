#include <stdio.h>

int main(void)
{
  int value1, value2;

  printf("Enter two integer values. ");
  scanf("%i %i", &value1, &value2);

  if ( value1 % value2 == 0 )
    printf("The second number is divisible by the first!\n");
  else
    printf("The second number is NOT divisible by the first.\n");

  return 0;
}
