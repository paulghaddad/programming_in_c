#include <stdio.h>

int main (void)
{
  void uppercase ( char source[] );

  char string[] = { "Hello, World!" };
  uppercase(string);

  printf("Converted String: %s\n", string);
}

void uppercase ( char source[] )
{
  for ( int i = 0; i != '\0'; ++i )
    if ( source[i] >= 'a' && source[i] <= 'z' )
      source[i] = source[i] - 'a' + 'A';
}

