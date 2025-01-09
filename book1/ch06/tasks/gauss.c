#include <stdio.h>
#include <stdlib.h>

/* use only positive integers for n */
/* may produce overflow for large x and/or n */
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

/* use only positive integers for x */
/* do not use for x greater than let's say 20 */
int64_t Factorial(int x) {
  if (x <= 1) {
    return 1;
  }
  int64_t result = 1;
  while (x > 1) {
    result = result * x;
    x--;
  }
  return result;
}

/* use only positive integers for i and x */
double GetIthComponent(int i, int x) {
  double minusXSquared = -Power(x, 2);
  double result = (double)(Power(minusXSquared, i)) / (double)(Factorial(i));
  return result;
}

double Gauss(int x, int n) {
  double result = 0.0;
  for (int i = 0; i <= n; i++) {
    result = result + GetIthComponent(i, x);
  }
  return result;
}

int main(void) {

  /* possible overflow and rounding problems for big n's */
  printf("Gauss(x = 1, n = 20) = %.4f\n", Gauss(1, 20));
  printf("Gauss(x = 2, n = 20) = %.4f\n", Gauss(2, 20));

  return (EXIT_SUCCESS);
}
