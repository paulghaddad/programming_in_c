#include <stdio.h>

int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
int n = 16;
int order = 1;

void sort (void)
{
  int i, j, temp;

  for ( i = 0; i < n - 1; ++i )
    for ( j = i + 1; j < n; ++j )
      if ( (order == 1 && array[i] > array[j]) || (order == -1 && array[i] < array[j]) )
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
}

int main (void)
{
  int i;
  void sort (void);

  printf("The array before the sort.\n");

  for ( i = 0; i < 16; ++i )
    printf("%i ", array[i]);

  sort ();

  printf("\n\nThe array after the sort.\n");

  for ( i = 0; i < 16; ++i )
    printf("%i ", array[i]);

  printf("\n");

  return 0;
}
