#include <stdio.h>

void transposeArray ( int array1[4][5], int array2[5][4] )
{
  int row, column;

  for ( row = 0; row < 4; ++row )
    for ( column = 0; column < 5; ++column )
    {
      array2[column][row] = array1[row][column];
      printf("Value: %d\n", array1[row][column]);
    }
}

void displayMatrix (int matrix[5][4])
{
  int row, column;

  for ( row = 0; row < 5; ++row )
  {
    for ( column = 0; column < 4; ++column )
      printf("%5i", matrix[row][column]);
    printf("\n");
  }
}

int main (void)
{
  int originalArray[4][5] = 
  {
    { 0, 1, 2, 3, 4 },
    { 4, 3, 2, 1, 0 },
    { 10, 20, 30, 40, 50 },
    { 50, 40, 30, 20, 10 }
  };

  int newArray[5][4] = 
  {
    { 0, 1, 2, 4 },
    { 0, 1, 2, 4 },
    { 0, 1, 2, 4 },
    { 0, 1, 2, 4 },
    { 0, 1, 2, 4 }
  };

  //int newArray[5][4];

  void displayMatrix (int matrix[5][4]);
  void transposeArray ( int array1[4][5], int array2[5][4] );

  printf("Transposed matrix:\n");
  transposeArray ( originalArray, newArray );

  displayMatrix ( newArray );

  return 0;
}
