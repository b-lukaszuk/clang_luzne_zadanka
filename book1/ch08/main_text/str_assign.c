#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;

int main(void) {
  char greeting[15];
  printf("Current value of 'greeting' variable is: '%s'\n", greeting);
  // 14th caracter is the invisible string end character in C: '\0'
  strncpy(greeting, "Hello, world!", 14);
  // while coping:
  // char greeting[6];
  // strncpy(greeting, "Hello, world!", 5);
  // we need to add the string end character by hand, like so:
  // greeting[5] = '\0';
  printf("Current value of 'greeting' variable after assignment is: '%s'\n",
         greeting);

  return EXIT_SUCCESS;
}
