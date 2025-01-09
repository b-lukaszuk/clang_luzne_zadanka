#include <stdio.h>
#include <stdlib.h>

void PrintMultiples(int multsOf, int upto) {
  int i = 1;
  while (i <= upto) {
    printf("% 4d ", i * multsOf);
    i++;
  }
  printf("\n");
}

void PrintMultTable(int upto) {
  int i = 1;
  while (i <= upto) {
    PrintMultiples(i, upto);
    i++;
  }
}

int main(void) {

  int upto = 12;
  printf("Printing multiplicity table %ix%i\n", upto, upto);
  PrintMultTable(upto);

  return (EXIT_SUCCESS);
}
