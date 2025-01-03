#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int isEven(int n) {
  if (n % 2 == 0) {
    return TRUE;
  }
  return FALSE;
}

void printSequence(int n) {
  while (n != 1) {
    printf("%i\n", n);
    if (isEven(n) == TRUE) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }
  printf("1\n");
}

int main(void) {

  printf("Printing a mysterious sequence.\n");
  printSequence(3);

  return (EXIT_SUCCESS);
}
