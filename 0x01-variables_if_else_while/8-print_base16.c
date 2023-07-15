#include <stdio.h>

int main() {
    int number;

    printf("Numbers of base 16 in lowercase: ");
    for (number = 0; number < 16; number++) {
        if (number < 10) {
            printf("%d ", number);
        } else {
            char hexChar = 'a' + (number - 10);
            printf("%c ", hexChar);
        }
    }

    printf("\n");

    return 0;
}
