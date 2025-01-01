#include <stdio.h>
#include <stdlib.h>

int getGcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return getGcd(b, a % b);
  }
}

int main(void) {

  int a = 1071;
  int b = 462;

  printf("The greatest common divisor for %i and %i is %i\n", a, b,
         getGcd(a, b));

  return (EXIT_SUCCESS);
}
