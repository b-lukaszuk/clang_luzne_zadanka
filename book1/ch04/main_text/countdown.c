#include <stdio.h>
#include <stdlib.h>

void Countdown(int n) {
  if (n == 0) {
    printf("Blastoff!\n");
  } else {
    printf("%i\n", n);
    Countdown(n - 1);
  }
}

int main(void) {

  Countdown(5);

  return (EXIT_SUCCESS);
}
