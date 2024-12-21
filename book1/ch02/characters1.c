#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char letter = 'a' + 1;
  int number = 'a';

  printf("the letter: %c or %i\n", letter, letter);
  printf("the number: %c or %i\n", number, number);

  return (EXIT_SUCCESS);
}
