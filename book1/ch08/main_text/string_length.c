#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0

int main(void) {
    int length = 0;
    char fruit[] = "banana";
    char lastLetter = ' ';

    length = strlen(fruit);
    lastLetter = fruit[length-1];
    printf("The length of the word '%s' is %d characters.\n", fruit, length);
    printf("The last letter of the word '%s' is '%c'.\n", fruit, lastLetter);
    return EXIT_SUCCESS;
}
