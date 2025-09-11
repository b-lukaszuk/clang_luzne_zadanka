#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;

int main(void) {
  // char word[] = "potato";
  // char word[] = "allium";
  char word[] = "banana";
  int cmpResult = strcmp(word, "banana");
  if (cmpResult < 0) {
    printf("Your word, '%s', comes before banana.\n", word);
  } else if (cmpResult > 0) {
    printf("Your word, '%s', comes after banana.\n", word);
  } else {
    printf("It seems that we have two bananas!\n");
  }

  return EXIT_SUCCESS;
}
