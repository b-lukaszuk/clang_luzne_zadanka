#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;
#define TRUE 1;
#define FALSE 0;

int isAbecedarianIter(char *s) {
  int len = strlen(s);
  for (int i = 1; i < len; i++) {
    if (s[i - 1] >= s[i]) {
      return FALSE;
    }
  }
  return TRUE;
}

int main(void) {
  char word1[] = "biopsy";
  char word2[] = "bussy";
  char word3[] = "";
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word1, isAbecedarianIter(word1));
  printf("Is '%s' abecedarian (0 - false, 1 - true)? %d\n", word2, isAbecedarianIter(word2));
  return EXIT_SUCCESS;
}
