#include <stdio.h>

#define LOWER 0.0
#define STEP 20.0
#define UPPER 300.0

#define EXIT_SUCCESS 0

int main() {
  double fahr;

  printf("%8s %8s\n", "Fahr.", "Cels.");
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%8.0f %8.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  return EXIT_SUCCESS;
}
