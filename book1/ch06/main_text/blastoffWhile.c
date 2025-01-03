#include <stdio.h>
#include <stdlib.h>

void Countdown(int n) {
  while (n > 0) {
    printf("%i\n", n);
    n = n - 1;
  }
  printf("BLASTOFF!\n");
}

int main(void) {
  Countdown(3);
  return (EXIT_SUCCESS);
}
