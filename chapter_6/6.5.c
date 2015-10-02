#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int number, right_digit;
  bool is_negative = false;

  printf("Enter your number.\n");
  scanf("%i", &number);

  if ( number < 0 )
  {
    is_negative = true;
    number = -number;
  }

  do
  {
    right_digit = number % 10;
    printf("%i", right_digit);
    number = number / 10;
  }
  while ( number != 0 );

  if ( is_negative == true )
    printf("-");

  printf("\n");

  return 0;
}
