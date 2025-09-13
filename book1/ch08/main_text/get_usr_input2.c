#include <stdio.h>
#define EXIT_SUCCESS 0;

void cleanInputBuffer() {
  char ch; // helper variable, it stores discarded chars
  while ((ch = getchar()) != '\n' && ch != EOF);
}

int getInt() {
  int success, x;
  printf("Enter an integer: \n");
  success = scanf("%i", &x);
  while (success != 1) {
    printf("That isn't an integer. Please try again.\n");
    cleanInputBuffer();
    success = scanf("%i", &x);
  }
  return x;
}

int main(void) {
  int x = getInt();
  printf("Your input: %i\n", x);
  return EXIT_SUCCESS;
}
