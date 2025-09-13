#include <stdio.h>
#define EXIT_SUCCESS 0;

int getInt() {
  int success, x;
  char ch; // helper variable, it stores discarded chars
  printf("Enter an integer: \n");
  success = scanf("%i", &x);
  while (success != 1) {
    printf("That isn't an integer. Please try again.\n");
    // empty the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF);
    success = scanf("%i", &x);
  }
  return x;
}

int main(void) {
  int x = getInt();
  printf("Your input: %i\n", x);
  return EXIT_SUCCESS;
}
