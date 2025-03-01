#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number = 71;
  int lastDigit = number % 10;
  int firstDigit = number / 10;
  printf("%i\n", lastDigit * 10 + firstDigit);
  return EXIT_SUCCESS;
}
