#include <stdio.h>

/* buffer for use input of size 2048 */
static char input[2048];

int main(int argc, char *argv[]) {
  puts("Lipsy Version 0.0.0.0.1\n");
  puts("Press Ctrl+c to Exit\n");

  /* an infinite loop */
  while (1) {
    /* output our prompt */
    /* fputs is like puts, but does not append \n */
    fputs("lispy> ", stdout);

    /* fgets - reads input up until a new line */
    fgets(input, 2048, stdin);

    printf("You typed: %s", input);
  }

  return 0;
}
