#include <stdio.h>

int main() {
    char lowercase;

    printf("Lowercase alphabet in reverse: ");
    for (lowercase = 'z'; lowercase >= 'a'; lowercase--) {
        printf("%c ", lowercase);
    }

    printf("\n");

    return 0;
