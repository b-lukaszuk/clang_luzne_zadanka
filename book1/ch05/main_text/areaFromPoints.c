#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double getSquare(double x) { return x * x; }

// uses the Pythagorean thorem
double getDistance(double x1, double y1, double x2, double y2) {
  return sqrt(getSquare(x1 - x2) + getSquare(y1 - y2));
}

double getCircleArea(double radius) {
  double pi = acos(-1);
  return pi * radius * radius;
}

// xc, yc - center coordinates
// xp, yp - perhiphery coordinates
double getCircleAreaFromPoints(double xc, double yc, double xp, double yp) {
  double radius = getDistance(xc, yc, xp, yp);
  double result = getCircleArea(radius);
  return result;
}

int main(void) {

  double x1 = 1.0;
  double y1 = 2.0;
  double x2 = 4.0;
  double y2 = 6.0;

  printf("The area of a circle with center at (%.2f, %.2f) and a peripheral "
         "point at (%.2f, %.2f) is %.2f [cm^2]\n",
         x1, y1, x2, y2, getCircleAreaFromPoints(x1, y1, x2, y2));

  return (EXIT_SUCCESS);
}
