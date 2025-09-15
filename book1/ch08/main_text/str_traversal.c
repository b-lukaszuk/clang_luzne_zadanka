#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0

int main(void) {
    char fruit[] = "banana";
    int length = strlen(fruit);
    int index = length - 1;

    printf("The the word '%s' spelled backwards is: '", fruit);
    while (0 <= index) {
        printf("%c", fruit[index]);
        index = index - 1;
    }
    printf("'.\n");
    return EXIT_SUCCESS;
}
