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

int getIndexOfMaxInRange(int array[], uint len) {
  int maxInd = 0;
  for (int i = 1; i < len; i++) {
    if (array[i] > array[maxInd]) {
      maxInd = i;
    }
  }
  return maxInd;
}

void swapElements(int *array, uint ind1, uint ind2) {
  int elt1 = array[ind1];
  int elt2 = array[ind2];
  array[ind1] = elt2;
  array[ind2] = elt1;
}

void sortArray(int *array, uint len) {
    int maxInd = 0;
    for (int i = 0; i < len; i++) {
        maxInd = getIndexOfMaxInRange(&array[i], len-i) + i;
        swapElements(array, i, maxInd);
    }
}

int main(void) {
  srand(time(NULL));
  int arrLen = getRandInt(5, 10);
  int arr[arrLen];
  for (int i = 0; i < arrLen; i++) {
    srand(time(NULL) + i);
    arr[i] = getRandInt(1, 11);
  }
  printf("the array:\n");
  printArray(arr, arrLen);
  printf("sorting the array in descending order, result:\n");
  sortArray(arr, arrLen);
  printArray(arr, arrLen);
  printf("Thats all. Goodbye.\n");
  return EXIT_SUCCESS;
}
