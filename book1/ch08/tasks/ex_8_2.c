#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0
#define LOW_LETT_A_ASCII 97
#define ALPHABET_LEN 26

// make sure c is in range [a-z] and [A-Z]
int getIndex(char c) { return (int)tolower(c) - LOW_LETT_A_ASCII; }

// make sure s contains only letters: [a-z] or [A-Z]
int *getLetterHist(char *s) {
  static int hist[ALPHABET_LEN] = {0};
  for (int i = 0; i < strlen(s); i++) {
    hist[getIndex(s[i])] += 1;
  }
  return hist;
}

// make sure s contains only letters: [a-z] or [A-Z]
void printHist(char *s) {
  int *hist = getLetterHist(s);
  for (int i = 0; i < ALPHABET_LEN; i++) {
    printf("%c  ", (char)(i + LOW_LETT_A_ASCII));
  }
  printf("\n");
  for (int i = 0; i < ALPHABET_LEN; i++) {
    printf("%d  ", hist[i]);
  }
  printf("\n");
}

int main(void) {
  char word[] = "abracadabra";
  printf("Histogram of '%s':\n", word);
  printHist(word);

  return EXIT_SUCCESS;
}
