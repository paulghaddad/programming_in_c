#include <stdio.h>

int main (void)
{
  int findString (const char source[], const char searchTerm[]);

  printf("%d\n", findString("a chatterbox", "hat"));
}

int findString (const char source[], const char searchTerm[])
{
  for ( int i = 0; source[i] != '\0'; ++i )
  {
    if ( source[i] == searchTerm[0] )
    {
      for ( int j = 0; source[i + j] == searchTerm[j] ; ++j )
      {
        if ( searchTerm[j + 1] == '\0' )
          return i;
      }
    }
  }

  return -1;
}
