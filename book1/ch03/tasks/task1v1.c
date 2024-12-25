#include <stdio.h>
#include <stdlib.h>

void Multadd(double a, double b, double c) {
  double result = a * b + c;
  printf("%.2f * %.2f + %.2f = %.2f\n", a, b, c, result);
}

int main(void) {

  Multadd(1.0, 2.0, 3.0);

  return (EXIT_SUCCESS);
}
