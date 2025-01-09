#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* returns a random int in range 0 (inclusive) and upBound (exclusive) */
int getRand(int upBound) { return rand() % upBound; }

/* returns a random int in range lowBound (inclusive) and upBound (exclusive)
 */
int getRandInt(int lowBound, int upBound) {
  return getRand(upBound - lowBound) + lowBound;
}

int main(void) {

  printf("Printing 5 random ints in range 0-3 (inclusive-exclusive)\n");
  for (int i = 0; i < 5; i++) {
    srand(time(NULL) + i);
    printf("%i\n", getRand(3));
  }
  printf("\n");

  printf("Printing 5 random ints in range 3-6 (inclusive-exclusive)\n");
  for (int i = 0; i < 5; i++) {
    srand(time(NULL) + i);
    printf("%i\n", getRandInt(3, 6));
  }
  printf("Done\n");

  return (EXIT_SUCCESS);
}
