#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* returns a random double in range 0.0-1.0 */
double getRand() {
  int x = rand();
  return (double)x / RAND_MAX;
}

int main(void) {

  printf("Printing 5 random doubles in range 0.0-1.0\n");
  for (int i = 0; i < 5; i++) {
    srand(time(NULL) + i);
    printf("%.4f\n", getRand());
  }
  printf("Done\n");

  return (EXIT_SUCCESS);
}
