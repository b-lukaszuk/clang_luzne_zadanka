#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int isTriangle(int x, int y, int z) {
  if (x > (y + z)) {
    return FALSE;
  }
  if (y > (x + z)) {
    return FALSE;
  }
  if (z > (x + y)) {
    return FALSE;
  }
  return TRUE;
}

int main(void) {

  for (int i = 1; i < 5; i++) {
    for (int j = 1; j < 5; j++) {
      for (int k = 1; k < 5; k++) {
        if (isTriangle(i, j, k) == TRUE) {
          printf("You can create traingle of the sides lengths: %i, %i, %i\n",
                 i, j, k);
        }
      }
    }
  }

  return (EXIT_SUCCESS);
}
