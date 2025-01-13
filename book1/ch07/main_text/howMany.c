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

void RandomizeArray(int array[], int length, int upperBound) {
  for (int i = 0; i < length; i++) {
    array[i] = getRandInt(1, upperBound);
  }
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

int howManyVals(int array[], int length, int value) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] == value) {
      count++;
    }
  }
  return count;
}

int main(void) {

  const int len = 10;
  const int upBound = 6;
  int arr1[len];
  int arr2[len];

  srand(time(NULL));
  RandomizeArray(arr1, len, upBound);
  RandomizeArray(arr2, len, upBound);

  printf("Counting 1s in a random array: ");
  printArray(arr1, len);
  printf("Result: %i\n", howManyVals(arr1, len, 1));

  printf("Counting 4s in a random array: ");
  printArray(arr2, len);
  printf("Result: %i\n", howManyVals(arr2, len, 4));

  printf("Done. Goodbye!\n");

  return (EXIT_SUCCESS);
}
