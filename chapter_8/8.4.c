#include <stdio.h>

float absoluteValue (float x)
{
  if ( x < 0 )
    x = -x;

  return (x);
}

float squareRoot (float x)
{
  const float epsilon  = 0.00001;
  float guess = 1.0;

  if ( x < 0 )
  {
    printf ("Negative argument to squareRoot\n");
    return -1.0;
  }

  while ( absoluteValue (guess * guess - x) >= epsilon )
  {
    guess = ( x / guess + guess ) / 2.0;
    printf("The current guess is %f\n", guess);
  }

  return guess;
}

int main(void)
{
  printf("squareRoot (2.0) = %f\n", squareRoot (2.0));
  printf("squareRoot (144.0) = %f\n", squareRoot (144.0));
  printf("squareRoot (17.5) = %f\n", squareRoot (17.5));
  printf("squareRoot (-4.0) = %f\n", squareRoot (-4.0));

  return 0;
}
