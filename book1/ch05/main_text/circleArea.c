#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double getCircleArea(double radius) {
  double pi = acos(-1);
  return pi * radius * radius;
}

int main(void) {

  double radius1 = 15.0;
  double radius2 = 22.5;

  printf("The area of a circle with radius = %.2f [cm] is %.2f [cm^2]\n",
         radius1, getCircleArea(radius1));
  printf("The area of a circle with radius = %.2f [cm] is %.2f [cm^2]\n",
         radius2, getCircleArea(radius2));

  return (EXIT_SUCCESS);
}
