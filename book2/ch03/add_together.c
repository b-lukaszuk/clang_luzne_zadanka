#include <stdio.h>

int add_together(int x, int y) {
  int result = x + y;
  printf("Adding together %d and %d, result %d.\n", x, y, result);
  return result;
}

int main(int argc, char **argv) {
  add_together(2, 3);
  return 0;
}
