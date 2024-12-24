#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int day = 22;
  int month = 12;
  int year = 2024;

  printf("The hardcoded date is:\n");
  printf("\tAmerican format:");
  printf("\t%i/%i/%i\n", month, day, year);
  printf("\tEuropean format:");
  printf("\t%i/%i/%i\n", day, month, year);

  return (EXIT_SUCCESS);
}
