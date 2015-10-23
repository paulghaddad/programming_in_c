#include <stdio.h>

int main(void)
{
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  int convertedNumber[64];
  long int numberToConvert;
  int nextDigit, base, index = 0;

  // Get the number and base

  printf("Number to be converted? ");
  scanf("%ld", &numberToConvert);
  printf("Base? ");
  scanf("%i", &base);

  // Convert to the indicated base

  do {
    convertedNumber[index] = numberToConvert % base;
    ++index;
    numberToConvert /= base;
  } while ( numberToConvert != 0 );

  // Display the results in reverse order

  for (--index; index >= 0; --index)
  {
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
  }

  printf("\n");

  return 0;
}
