#include <stdio.h>

int arraySum ( int elements[], int numElements )
{
  int sum = 0;

  for ( int i = 1; i <= numElements; ++i )
    sum += elements[i - 1];

  return sum;
}

int main (void)
{
  int array[4] = { 1, 2, 3, 4 };
  int arraySum ( int elements[], int numElements );

  printf("The sum of the elements in the array is %d\n", arraySum ( array, 4 ));

  return 0;
}
