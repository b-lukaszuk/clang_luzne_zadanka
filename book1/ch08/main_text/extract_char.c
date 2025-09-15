#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void) {
  char fruit[] = "banana";
  char letter = fruit[1];
  printf("The second character in <<%s>> is <<%c>>.\n", fruit, letter);
  return EXIT_SUCCESS;
}
