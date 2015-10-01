#include <stdio.h>

int main(void)
{
  int number, right_digit, sum;

  printf("What number would you like calculate the sum of digits? ");
  scanf("%i", &number);

  sum = 0;

  while ( number > 0 )
  {
    right_digit = number % 10;
    sum += right_digit;
    number /= 10;
  }

  printf("The sum of the digits is %i\n", sum);

  return 0;
}
