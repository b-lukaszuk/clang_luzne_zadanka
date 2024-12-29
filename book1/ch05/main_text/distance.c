#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double getSquare(double x) { return x * x; }

// uses the Pythagorean thorem
double getDistance(double x1, double y1, double x2, double y2) {
  return sqrt(getSquare(x1 - x2) + getSquare(y1 - y2));
}

int main(void) {

  double x1 = 1.0;
  double y1 = 2.0;
  double x2 = 4.0;
  double y2 = 6.0;

  printf("The distance between point A (%.2f, %.2f) and point B (%.2f, %2.f) "
         "is: %2.f\n",
         x1, y1, x2, y2, getDistance(x1, y1, x2, y2));

  return (EXIT_SUCCESS);
}
