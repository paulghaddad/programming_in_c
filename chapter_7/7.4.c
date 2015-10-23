#include <stdio.h>

int main(void)
{
  float values[11];
  float sum = 0.0;
  int index = 1;
  float response, average;

  printf("Enter 10 values for the array: \n");

  while ( index <= 10 )
  {
    scanf("%f", &response);
    values[index] = response;
    index++;
  }

  for ( index = 1; index <= 10; index++ )
    sum += values[index];

  average = sum / 10.0;
  printf("The average of the values in the array is: %.2f\n", average);

  return 0;
}
