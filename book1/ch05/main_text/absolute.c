#include <stdio.h>
#include <stdlib.h>

double getAbsoluteValue(double x) {
  if (x < 0) {
    return -x;
  } else {
    return x;
  }
}

int main(void) {

  double x1 = -15.0;
  double x2 = 0;
  double x3 = 15.0;

  printf("The absolute value of %.2f is %2.f\n", x1, getAbsoluteValue(x1));
  printf("The absolute value of %.2f is %2.f\n", x2, getAbsoluteValue(x2));
  printf("The absolute value of %.2f is %2.f\n", x3, getAbsoluteValue(x3));

  return (EXIT_SUCCESS);
}
