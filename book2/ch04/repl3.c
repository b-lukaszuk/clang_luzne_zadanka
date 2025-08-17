#include <stdio.h>
#include <stdlib.h>

/* if we are compiling on windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* fake readline function */
char *readline(char *prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char *cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

/* fake add_history function */
void add_history(char *unused) {}
#else
#include <editline/history.h>
#include <editline/readline.h>
#endif

/* apt-get install libedit-dev */
/* cc -std=c99 -Wall repl3.c -ledit -o a */

int main(int argc, char *argv[]) {
  puts("Lipsy Version 0.0.0.0.1\n");
  puts("Press Ctrl+c to Exit\n");

  /* an infinite loop */
  while (1) {
    /* now in either case readline will be correctly defined */
    char *input = readline("lispy> ");
    add_history(input);

    /* readline function strips \n from the input */
    printf("You typed: %s\n", input);
    free(input);
  }

  return 0;
}
