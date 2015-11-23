#include <stdio.h>

int main (void)
{
  void insertString (char source[], char insertString[], int position);

  char string[] = { "the wrong person" };
  insertString(string, "abc", 10);
  printf("The new string is: %s\n", string);

  return 0;
}

void insertString (char source[], char insertString[], int position)
{
  int stringLength ( char string[] );

  int sourceLength = stringLength ( source );
  int insertLength = stringLength ( insertString );

  for ( int i = sourceLength; i >= position; --i )
    source[insertLength + i] = source[i];

  for ( int j = 0; j < insertLength; ++j )
    source[position + j] = insertString[j];
}

int stringLength ( char string[] )
{
  int i = 0;

  while ( string[i] != '\0' )
    ++i;

  return i;
}
