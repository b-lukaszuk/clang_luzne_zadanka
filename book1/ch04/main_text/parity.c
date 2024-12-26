#include <stdio.h>
#include <stdlib.h>

void PrintParity(int x) {
  if (x % 2 == 0) {
    printf("x is even\n");
  } else {
    printf("x is odd\n");
  }
}

int main(void) {

  int number = 17;
  printf("x = %i\n", number);
  PrintParity(number);

  return (EXIT_SUCCESS);
}
