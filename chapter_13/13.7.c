#include <stdio.h>

#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))
#define IS_UPPER_CASE(x) (((x) >= 'A') && ((x) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

int main (void)
{
  printf("The letter H is alphabetic: %d\n", IS_ALPHABETIC('H'));

  printf("The character $ is not alphabetic: %d\n", IS_ALPHABETIC('$'));

  return 0;
}
