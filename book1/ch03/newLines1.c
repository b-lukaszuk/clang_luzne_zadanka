#include <stdio.h>
#include <stdlib.h>

void PrintNewLine(void) { printf("\n"); }

void PrintThreeNewLines(void) {
  PrintNewLine();
  PrintNewLine();
  PrintNewLine();
}

int main(void) {

  printf("First Line.\n");
  PrintThreeNewLines();
  printf("Second Line.\n");

  return (EXIT_SUCCESS);
}
