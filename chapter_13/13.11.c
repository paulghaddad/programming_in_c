#include <stdio.h>
#include <ctype.h>

int main (void)
{
  printf("The letter H is alphabetic: %d\n", isalpha('H'));

  printf("The letter H is uppercase: %d\n", isupper('H'));

  printf("The letter h is alphabetic: %d\n", islower('h'));

  return 0;
}
