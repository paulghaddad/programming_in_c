#include <stdio.h>

int main (void)
{
  float a, b, c;
  float discriminant (float a, float b, float c);
  float root1 (float a, float b, float c);
  float root2 (float a, float b, float c);

  printf("Enter the value for A: ");
  scanf("%f", &a);

  printf("Enter the value for B: ");
  scanf("%f", &b);

  printf("Enter the value for C: ");
  scanf("%f", &c);

  if ( discriminant(a, b, c) < 0 )
    printf("The roots are imaginary!\n");
  else
  {
    printf("The first root is: %.2f\n", root1(a, b, c));
    printf("The second root is: %.2f\n", root2(a, b, c));
  }

  return 0;
}

float discriminant ( float a, float b, float c )
{
  return (b * b - (4 * a * c));
}

float squareRoot (float x)
{
  const float epsilon  = 0.00001;
  float guess = 1.0;

  float absoluteValue (float x);

  if ( x < 0 )
  {
    printf ("Negative argument to squareRoot\n");
    return -1.0;
  }

  while ( absoluteValue (guess * guess - x) >= epsilon )
    guess = ( x / guess + guess ) / 2.0;

  return guess;
}

float absoluteValue (float x)
{
  if ( x < 0 )
    x = -x;

  return (x);
}

float root1 (float a, float b, float c)
{
  float numerator;
  float denominator;
  float squareRoot (float x);
  float discriminant(float a, float b, float c);


  numerator = -b + squareRoot(discriminant(a, b, c));
  denominator = 2 * a;

  return numerator / denominator;
}

float root2 (float a, float b, float c)
{
  float numerator;
  float denominator;
  float squareRoot (float x);
  float discriminant(float a, float b, float c);

  numerator = -b - squareRoot(discriminant(a, b, c));
  denominator = 2 * a;

  return numerator / denominator;
}
