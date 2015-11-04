#include <stdio.h>

int lcm (int u, int v)
{
  int gcd (int u, int v);

  if ( u < 0 || v < 0 )
    return 0;
  else 
    return ( u * v / gcd (u, v) );
}

int gcd(int u, int v)
{
  int temp;

  while ( v != 0 )
  {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}

int main (void)
{
  int u, v;
  int result;
  int lcm (int u, int v);

  printf("Please enter the first integer: ");
  scanf("%i", &u);

  printf("Please enter the second integer: ");
  scanf("%i", &v);

  result = lcm (u, v);

  printf("The LCD of the two integers is %i\n", result);

  return 0;
}

