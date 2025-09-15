#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0

int locateCharacter(char *s, char c) {
  int i = 0;
  while (i < strlen(s)) {
    if (s[i] == c) {
      return i;
    }
    i = i + 1;
  }
  return -1;
}

int main(void) {
  char fruit[] = "banana";
  char let1 = 'b';
  char let2 = 'n';
  char let3 = 'c';

  printf("The the first occurence of the letter '%c' in the word '%s' is at "
         "position (0 indexed, -1 if not found): %d\n",
         let1, fruit, locateCharacter(fruit, let1));
  printf("The the first occurence of the letter '%c' in the word '%s' is at "
         "position (0 indexed, -1 if not found): %d\n",
         let2, fruit, locateCharacter(fruit, let2));
  printf("The the first occurence of the letter '%c' in the word '%s' is at "
         "position (0 indexed, -1 if not found): %d\n",
         let3, fruit, locateCharacter(fruit, let3));
  return EXIT_SUCCESS;
}
