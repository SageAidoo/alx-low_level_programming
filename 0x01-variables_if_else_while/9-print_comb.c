#include <stdio.h>

int main() {
    int i, j;

    printf("All possible combinations of single-digit numbers:\n");
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}
