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

int getIndexOf(int array[], uint len, int target) {
  for (int i = 0; i < len; i++) {
    if (array[i] == target) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int target1 = 1;
  int target2 = 2;
  srand(time(NULL));
  int arrLen = getRandInt(5, 10);
  int arr[arrLen];
  for (int i = 0; i < arrLen; i++) {
    srand(time(NULL) + i);
    arr[i] = getRandInt(1, 11);
  }
  printf("the array:\n");
  printArray(arr, arrLen);
  printf("index of first %i in the array, result %i\n", target1,
         getIndexOf(arr, arrLen, target1));
  printf("index of first %i in the array, result %i\n", target2,
         getIndexOf(arr, arrLen, target2));
  printf("Thats all. Goodbye.");
  return EXIT_SUCCESS;
}
