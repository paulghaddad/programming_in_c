#include <stdio.h>

int main(void)
{
  int value1, value2;

  printf("Please enter two integers: ");
  scanf("%i %i", &value1, &value2);

  if ( value2 == 0 )
    printf("You can't divide by zero!\n");
  else
    printf("The first number divided by the second is %.3f.\n", (float) value1 / value2);

  return 0;
}
