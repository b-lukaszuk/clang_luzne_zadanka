#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double x = 1.0;

  while (x < 6.0) {
    printf("ln(%.0f) = %.4f\n", x, log(x));
    x = x + 1.0;
  }

  printf("\n");
  x = 1.0;

  while (x < 100.0) {
    printf("log2(%.0f) = %.1f\n", x, log(x) / log(2.0));
    x = x * 2.0;
  }

  return (EXIT_SUCCESS);
}
