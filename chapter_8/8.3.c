#include <stdio.h>

float absoluteValue (float x)
{
  if ( x < 0 )
    x = -x;

  return (x);
}

float squareRoot (float x, float epsilon)
{
  float guess = 1.0;

  if ( x < 0 )
  {
    printf ("Negative argument to squareRoot\n");
    return -1.0;
  }

  while ( absoluteValue (guess * guess - x) >= epsilon )
    guess = ( x / guess + guess ) / 2.0;

  return guess;
}

int main(void)
{
  printf("%f\n", squareRoot (3.0, 0.1));
  printf("%f\n", squareRoot (3.0, 0.01));
  printf("%f\n", squareRoot (3.0, 0.001));
  printf("%f\n", squareRoot (3.0, 0.0001));

  return 0;
}
