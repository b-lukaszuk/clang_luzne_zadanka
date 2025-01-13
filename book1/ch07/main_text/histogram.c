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
void RandomizeArray(int array[], int length, int upperBound) {
  for (int i = 0; i < length; i++) {
    array[i] = getRandInt(1, upperBound);
  }
}

int main(void) {

  const int upBound = 11;
  const int len = 10000;
  int arr[len];
  int histogram[len];

  printf("\nGenerating array with %i random elements in range [1-%i].\n", len,
         upBound - 1);
  srand(time(NULL));
  RandomizeArray(arr, len, upBound);

  printf("Generating histogram for the array.\n");
  for (int i = 0; i < len; i++) {
    int histIndex = arr[i];
    histogram[histIndex]++;
  }

  printf("Printing histogram for the array.\n");
  printf("\nNum. |\tCount\n");
  printf("-------------\n");
  for (int i = 1; i < upBound; i++) {
    printf("% 4i |\t%i\n", i, histogram[i]);
  }

  printf("\nThat's all. Goodbye!\n");

  return (EXIT_SUCCESS);
}
