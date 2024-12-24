#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int hour = 11;
  int minute = 59;
  char colon = ':';
  int percentage = (minute * 100) / 60;

  printf("The hardcoded time is %i%c%i\n", hour, colon, minute);
  printf("Number of minutes since midnight: %i\n", hour * 60 + minute);
  printf("Percentage of the hour that has passed: %i\n", percentage);

  return (EXIT_SUCCESS);
}
