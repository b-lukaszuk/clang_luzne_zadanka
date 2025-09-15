#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void) {
  int success, x;
  // prompt the user for input
  printf("Enter an integer: \n");

  // get input
  success = scanf("%i", &x);

  // check and see if the input statement succeeded
  if (success == 1) {
    // print the value we got from the user
    printf("Your input: %i\n", x);
    return EXIT_SUCCESS;
  }
  printf("That was not an integer.\n");
  return EXIT_SUCCESS;
}
