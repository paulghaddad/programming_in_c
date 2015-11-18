#include <stdio.h>

int main (void)
{
  void substring (const char source[], int start, int count, char result[]);
  const char s1[] = { "character" };
  const char s2[] = { "two words" };
  char s3[30];
  char s4[30];

  substring (s1, 4, 3, s3);
  substring (s2, 4, 20, s4);
  printf("%s\n", s3);
  printf("%s\n", s4);

  return 0;
}

void substring (const char source[], int start, int count, char result[])
{
  int i;

  for ( i = 0; i < count && source[i + start] != '\0'; ++i )
    result[i] = source[i + start];

  result[1 + count] = '\0';
}
