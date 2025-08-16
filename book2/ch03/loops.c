#include <stdio.h>

int main(int argc, char **argv) {
  int i = 10;

  while (i > 0) {
    printf("While loop iteration %d\n", i);
    i = i - 1;
  }

  for (int i = 0; i < 10; i++) {
    printf("For loop iteration %d\n", i);
  }
  return 0;
}
