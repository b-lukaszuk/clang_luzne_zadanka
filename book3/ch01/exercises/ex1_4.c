#include <stdio.h>

#define LOWER 0.0
#define STEP 20.0
#define UPPER 300.0

#define EXIT_SUCCESS 0

int main() {
  double cels;

  printf("%8s %8s\n", "Cels.", "Fahr.");
  for (cels = LOWER; cels <= UPPER; cels = cels + STEP) {
    printf("%8.0f %8.2f\n", cels, cels * (9.0 / 5.0) + 32);
  }

  return EXIT_SUCCESS;
}
