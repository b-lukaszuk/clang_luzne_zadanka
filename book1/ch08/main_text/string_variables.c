#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void) {
  char first[] = "Hello, ";
  char second[] = "world!";
  printf("%s%s composed of strings, i.e. arrays of chars.\n", first, second);
  return EXIT_SUCCESS;
}
