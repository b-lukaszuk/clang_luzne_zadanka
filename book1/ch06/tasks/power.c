#include <stdio.h>
#include <stdlib.h>

/* use only positive integers for x and n */
int Power(int x, int n) {
  if (n == 0) {
    return 1;
  }
  int result = x;
  while (n > 1) {
    n--;
    result *= x;
  }
  return result;
}

int main(void) {

  printf("2^0 = %i\n", Power(2, 0));
  printf("2^1 = %i\n", Power(2, 1));
  printf("2^4 = %i\n", Power(2, 4));
  printf("2^10 = %i\n", Power(2, 10));
  printf("3^0 = %i\n", Power(3, 0));
  printf("3^1 = %i\n", Power(3, 1));
  printf("3^2 = %i\n", Power(3, 2));
  printf("3^3 = %i\n", Power(3, 3));
  printf("3^10 = %i\n", Power(3, 10));

  return (EXIT_SUCCESS);
}
