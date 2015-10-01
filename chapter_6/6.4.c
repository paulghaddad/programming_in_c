#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  float number, accumulator;
  char operator;

  accumulator = 0.0;
  operator = 'S';

  printf("Begin Calculations\n");

  while ( true )
  {
    scanf("%f %c", &number, &operator);

    if ( operator == 'E' )
    {
      printf("= %.6f\n", accumulator);
      printf("End of Calculations\n");
      break;
    }

    switch (operator)
    {
      case 'S':
        accumulator = number;
        printf("= %.6f\n", accumulator);
        break;
      case '+':
        accumulator += number;
        printf("= %.6f\n", accumulator);
        break;
      case '-':
        accumulator -= number;
        printf("= %.6f\n", accumulator);
        break;
      case '*':
        accumulator *= number;
        printf("= %.6f\n", accumulator);
        break;
      case '/':
        ( number == 0 ) ? printf("Division by zero!\n") : printf("= %.6f\n", accumulator /= number);
        break;
      default:
        printf("You typed an invalid operator!\n");
        break;
    }
  }

  return 0;
}
