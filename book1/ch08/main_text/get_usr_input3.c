#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void) {
  char name[80];
  printf("What is your name?\n");
  scanf("%s", name);
  printf("Hello %s, nice to meet you.\n", name);
  return EXIT_SUCCESS;
}
