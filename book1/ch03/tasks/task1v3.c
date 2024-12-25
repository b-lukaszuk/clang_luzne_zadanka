#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double Multadd(double a, double b, double c) { return a * b + c; }

void Yikes(double x) {
  double eToMinX = exp(-x);
  double result = Multadd(1.0, x * eToMinX, sqrt(1.0 - eToMinX));
  printf("Yikes(%.2f) = %.2f\n", x, result);
}

int main(void) {

  Yikes(3);

  return (EXIT_SUCCESS);
}