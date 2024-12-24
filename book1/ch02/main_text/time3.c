#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int hour = 11;
  int minute = 59;
  char colon = ':';

  printf("The hardcoded time is %i%c%i\n", hour, colon, minute);
  printf("Number of minutes since midnight: %i\n", hour * 60 + minute);
  printf("Percentage of the hour that has passed: ");
  printf("%i\n", minute * 100 / 60);

  return (EXIT_SUCCESS);
}
