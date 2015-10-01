#include <stdio.h>

int main(void)
{
  int n, number, triangularNumber, counter, number_of_triangular_numbers;

  printf("How many triangular numbers do you want to calculate? ");
  scanf("%i", &number_of_triangular_numbers);

  for ( counter = 1; counter <= number_of_triangular_numbers; ++counter ) 
  {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    for ( n = 1; n <= number; ++n )
      triangularNumber += n;

    printf("Triangular number %i is %i\n\n", number, triangularNumber);

  }

  return 0;
}
