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

/* funny, in C you cannot determine the size of an array in the function */
/* or at least it is not trivial */
void printArray(int array[], int length) {
  printf("[");
  for (int i = 0; i < length; i++) {
    printf(" %i ", array[i]);
  }
  printf("]\n");
}

int main(void) {

  srand(time(NULL));
  int arrLen = getRandInt(2, 6);
  int arr[arrLen];
  for (int i = 0; i < arrLen; i++) {
    srand(time(NULL) + i);
    arr[i] = getRandInt(1, 11);
  }

  printf("Printing %i-element array with random ints 1 upto 10 inside\n",
         arrLen);
  printArray(arr, arrLen);

  return (EXIT_SUCCESS);
}
