#include <stdio.h>
#include <stdlib.h>

/* apt-get install libedit-dev */
/* cc -std=c99 -Wall repl2.c -ledit -o a */
#include <editline/history.h>
#include <editline/readline.h>

int main(int argc, char *argv[]) {
  puts("Lipsy Version 0.0.0.0.1\n");
  puts("Press Ctrl+c to Exit\n");

  /* an infinite loop */
  while (1) {
    /* output our prompt */
    char *input = readline("lispy> ");

    /* add input to history */
    add_history(input);

    /* readline function strips \n from the input */
    printf("You typed: %s\n", input);

    /* free retrieved input, free memory */
    free(input);
  }

  return 0;
}
