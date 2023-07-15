#include <stdio.h>

int main() {
    int i, j;

    printf("All possible different combinations of two digits:\n");
    for (i = 0; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}
