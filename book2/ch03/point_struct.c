#include <math.h>
#include <stdio.h>

/* compile with -lm flag to link the math library, see below*/
/* gcc point_struct.c -lm */

typedef struct {
  double x;
  double y;
} point;

int main(int argc, char **argv) {
  point p1;
  p1.x = 2.0;
  p1.y = 4.0;
  point p2;
  p2.x = 4.0;
  p2.y = 2.0;
  double dx = p1.x - p2.x;
  double dy = p1.y - p2.y;
  double distance = sqrt(dx * dx + dy * dy);
  printf(
      "Distance between point 1 (%.2f, %.2f) and point 2 (%.2f, %.2f) is %.2f "
      "units\n",
      p1.x, p1.y, p2.x, p2.y, distance);
  return 0;
}
