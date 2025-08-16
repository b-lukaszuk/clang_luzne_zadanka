#include <stdio.h>

int main(int argc, char **argv) {
  int i = 5;
  while (i > 0) {
    printf("%d: Hello world!\n", i);
    i--;
  }
  return 0;
}
