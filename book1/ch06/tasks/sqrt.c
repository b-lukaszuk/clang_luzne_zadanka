#include <stdio.h>
#include <stdlib.h>

double getSquare(double x) { return x * x; }

double getAbs(double x) {
  if (x < 0) {
    return -x;
  }
  return x;
}

double getAbsDiff(double x, double y) { return getAbs(x - y); }

double getNewGuess(double oldGuess, double square) {
  return (oldGuess + square / oldGuess) / 2.0;
}

/* use only positive doubles for x and n */
double getSqrt(double x) {
  double result = x / 2;
  const double acceptableDiff = 0.0001;
  while (getAbsDiff(getSquare(result), x) > acceptableDiff) {
    result = getNewGuess(result, x);
  }
  return result;
}

int main(void) {

  printf("Approximated square roots of different numbers\n");
  printf("sqrt(2) = %.6f\n", getSqrt(2));
  printf("sqrt(3) = %.6f\n", getSqrt(3));
  printf("sqrt(4) = %.6f\n", getSqrt(4));
  printf("sqrt(9) = %.6f\n", getSqrt(9));
  printf("sqrt(16) = %.6f \n", getSqrt(16));
  printf("sqrt(64) = %.6f \n", getSqrt(64));

  return (EXIT_SUCCESS);
}
