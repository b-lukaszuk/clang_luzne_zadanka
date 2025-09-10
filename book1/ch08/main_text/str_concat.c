#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;

int main(void) {
  char fruit[20] = "banana";
  char bakedGood[] = " nut bread";

  printf("concatenating '%s' and '%s'\n", fruit, bakedGood);
  strncat(fruit, bakedGood, strlen(bakedGood));
  printf("result: '%s'\n", fruit);

  return EXIT_SUCCESS;
}
