#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define ALPHABET_LEN 26
#define EXIT_SUCCESS 0
#define LOW_LETT_A_ASCII 97
#define FALSE 0
#define TRUE 1

// make sure c is in range [a-z] and [A-Z]
int getIndex(char c) { return (int)tolower(c) - LOW_LETT_A_ASCII; }

// ints must be: 0 - false, 1 - true
int logicalXOR(int a, int b) {
    return a != b;
}

// make sure s contains only letters: [a-z] or [A-Z]
int isDoubloon(char *s) {
  if (strlen(s) < 2) {
    return FALSE;
  }
  int hist[ALPHABET_LEN] = {0};
  for (int i = 0; i < strlen(s); i++) {
    hist[getIndex(s[i])] += 1;
  }
  for (int i = 0; i < ALPHABET_LEN; i++) {
    if (!logicalXOR(hist[i] != 0, hist[i] != 2)) {
      return FALSE;
    }
  }
  return TRUE;
}

int main(void) {
  char word1[] = "abracadabra";
  char word2[] = "Emmett";
  char word3[] = "horseshoer";
  char word4[] = "seems";

  printf("Is '%s' doubloon? (0 - false, 1 - true)? %d\n", word1,
         isDoubloon(word1));
  printf("Is '%s' doubloon? (0 - false, 1 - true)? %d\n", word2,
         isDoubloon(word2));
  printf("Is '%s' doubloon? (0 - false, 1 - true)? %d\n", word3,
         isDoubloon(word3));
  printf("Is '%s' doubloon? (0 - false, 1 - true)? %d\n", word4,
         isDoubloon(word4));

  return EXIT_SUCCESS;
}
