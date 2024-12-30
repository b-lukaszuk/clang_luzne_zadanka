#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int isSingleDigit(int x) {
  if (x >= 0 && x < 10) {
    return TRUE;
  } else {
    return FALSE;
  }
}

int main(void) {

  int x = 2;
  int y = 17;

  printf("is %i small? %i (0 - false, 1-true)\n", x, isSingleDigit(x));
  printf("is %i small? %i (0 - false, 1-true)\n", y, isSingleDigit(y));

  return (EXIT_SUCCESS);
}
