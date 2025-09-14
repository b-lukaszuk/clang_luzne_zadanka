#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;
#define TRUE 1;
#define FALSE 0;

int isAbecedarianIter(char *s) {
  int len = strlen(s);
  if (len < 2) {
    return TRUE;
  }
  for (int i = 1; i < len; i++) {
    if (s[i - 1] >= s[i]) {
      return FALSE;
    }
  }
  return TRUE;
}

int isAbecedarianRec(char *s, int i) {
  if (i < 1 || i >= strlen(s)) {
    i = 1;
  }
  if (i >= strlen(s) || i + 1 >= strlen(s)) {
    return TRUE;
  } else if (s[i - 1] >= s[i]) {
    return FALSE;
  } else {
    return isAbecedarianRec(s, i + 1);
  }
}

int main(void) {
  char word1[] = "biopsy";
  char word2[] = "busy";

  printf("Testing function isAbecedarianIter()\n");
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word1,
         isAbecedarianIter(word1));
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word2,
         isAbecedarianIter(word2));

  printf("\nTesting function isAbecedarianRec()\n");
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word1,
         isAbecedarianRec(word1, 1));
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word2,
         isAbecedarianRec(word2, 1));

  return EXIT_SUCCESS;
}
