#include <ctype.h>
#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void) {
  char letter = 'a';
  if (isalpha(letter)) {
    printf("The character '%c' is a letter.\n", letter);
    printf("The uppercased '%c' is '%c'.\n", letter, toupper(letter));
  }

  return EXIT_SUCCESS;
}
