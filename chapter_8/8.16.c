#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase (void)
{
  printf("Number to be converted? ");
  scanf("%li", &numberToConvert);

  do
  {
    printf("Enter base value between 2 and 16 ");
    scanf("%i", &base);
  } while ( base < 2 || base > 16 );
}

void convertNumber (void)
{
  long int tempNumberToConvert = numberToConvert;

  do
  {
    convertedNumber[digit] = tempNumberToConvert % base;
    ++digit;
    tempNumberToConvert /= base;
  }
  while ( tempNumberToConvert != 0 );
}

void displayConvertedNumber (void)
{
  const char baseDigits[16] =
          { '0', '1', '2', '3', '4', '5', '6', '7',
            '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  int nextDigit;

  printf("Converted number = ");

  for ( --digit; digit >= 0; --digit )
  {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }

  if ( numberToConvert == 0 )
    printf("%c", baseDigits[0]);

  printf("\n");
}

int main (void)
{
  void getNumberAndBase (void), convertNumber (void), displayConvertedNumber (void);

  do
  {
    getNumberAndBase ();
    convertNumber ();
    displayConvertedNumber ();
  } while ( numberToConvert != 0 );

  return 0;
}
