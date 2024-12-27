#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// using recursion, make sure to use positive integers
// make sure not to use large numbers
int raiseXToPowN(int x, int n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return x;
  } else {
    return x * raiseXToPowN(x, n - 1);
  }
}

bool isFermatFullfilled(int a, int b, int c, int pow) {
  if (raiseXToPowN(a, pow) + raiseXToPowN(b, pow) == raiseXToPowN(c, pow)) {
    return true;
  } else {
    return false;
  }
}

// start must be positive int above 1
// finish must be positive int above 1
void testFermat(int start, int finish) {
  for (int i = start; i <= finish; i++) {
    for (int j = start; j <= finish; j++) {
      for (int k = start; k <= finish; k++) {
        for (int pwr = start; pwr <= finish; pwr++) {
          if (isFermatFullfilled(i, j, k, pwr) && pwr == 2) {
            printf("Fermat was right. The thorem works for a=%i, b=%i, c=%i, "
                   "n=%i\n",
                   i, j, k, pwr);
          }
          if (isFermatFullfilled(i, j, k, pwr) && pwr != 2) {
            printf("Fermat was wrong. The thorem works for a=%i, b=%i, c=%i, "
                   "n=%i\n",
                   i, j, k, pwr);
          }
        }
      }
    }
  }
  printf(
      "Finished testing Fermat theorem for numbers in range from %i upto %i\n",
      start, finish);
}

int main(void) {
  printf("Testing Fermat's theorem: a^n + b^n = c^n (may work if n = 2)\n");
  testFermat(2, 10);
  return (EXIT_SUCCESS);
}
