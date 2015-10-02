#include <stdio.h>
#include <math.h>

int main(void)
{
  int number, left_digit;
  int num_of_digits = 0;

  // Determine number of digits in the number
  printf("Enter your number.\n");
  scanf("%i", &number);

  int temp_number = number;

  while ( temp_number > 0 )
  {
    temp_number /= 10;
    num_of_digits++;
  }

  while ( number > 0 )
  {
    int power = pow(10, num_of_digits - 1);
    left_digit = number / power;

    switch ( left_digit )
    {
      case 0:
        printf("zero");
        break;
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;
      default:
        printf("invalid character!");
        break;
    }

    printf(" ");
    number %= power;
    num_of_digits--;
  }

  printf("\n");
  return 0;
}
