#include <stdio.h>

int main (void)
{
  int number;
  int prime (int number);

  printf("Enter the test number: ");
  scanf("%i", &number);

  printf("%d\n", prime (number));

  return 0;
}

int prime (int number)
{
  int testNumber = 2;

  if ( number == 1 )
    return 1;

  while ( testNumber < number )
  {
    if ( number % testNumber == 0 )
      return 0;
    else
      testNumber++;

    return 1;
  }
}
