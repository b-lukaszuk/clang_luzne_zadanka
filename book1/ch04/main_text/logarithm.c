#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void PrintLogarithm(double x) {
  if (x <= 0.0) {
    printf("Cannot calculate ln for x <= 0.\n");
    return;
  }
  double result = log(x);
  printf("The ln of x is %.4f.\n", result);
}

int main(void) {

  double num = -3.0;
  printf("x = %.2f\n", num);
  PrintLogarithm(num);

  num = 2.718281;
  printf("x = %.6f\n", num);
  PrintLogarithm(num);

  num = 10.0;
  printf("x = %.2f\n", num);
  PrintLogarithm(num);

  return (EXIT_SUCCESS);
}
