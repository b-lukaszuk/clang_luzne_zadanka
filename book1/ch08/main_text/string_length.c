#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0;

int main(void) {
    int length;
    char fruit[] = "banana";

    length = strlen(fruit);
    printf("The length of the word '%s' is %d characters.\n", fruit, length);
    return EXIT_SUCCESS;
}
