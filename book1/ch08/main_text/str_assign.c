#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;

int main(void) {
  char greeting[15];
  printf("Current value of 'greeting' variable is: '%s'\n", greeting);
  // 14th caracter is the invisible string end character in C: '\0' (backslash zero)
  // it is not counted by strlen() from string.h, so strlen("Hello, world!") is 13
  // still, you need to consider it in strncpy(), so that it is copied (automatically) as well
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
