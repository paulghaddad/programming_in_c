#include <stdio.h>

int main(void)
{
  int n = 150;
  int i, j;
  int p[n];

  p[0] = 0;

  for ( int i = 1; i < n; ++i )
    p[i] = 0;

  for ( i = 2; i <= n; ++i )
  {
    if ( p[i] == 0 )
      printf("%i\n", i);

    j = 1;

    while ( i * j <= n )
    {
      p[i * j] = 1;
      ++j;
    }
  }

  return 0;
}

