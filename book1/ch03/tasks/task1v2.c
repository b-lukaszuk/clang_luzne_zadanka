#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double Multadd(double a, double b, double c) { return a * b + c; }

int main(void) {

  const double PI = acos(-1.0);
  const double PIby4 = PI / 4.0;
  printf("evaluating sin(PI/4) + cos(PI/4)/2 with Multadd, result: %.2f\n",
         Multadd(1.0, sin(PIby4), cos(PIby4) / 2.0));

  return (EXIT_SUCCESS);
}
