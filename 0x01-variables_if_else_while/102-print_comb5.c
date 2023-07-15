#include <stdio.h>

int main() {
    int i, j;

    printf("All possible combinations of two two-digit numbers:\n");
    for (i = 10; i <= 99; i++) {
        for (j = 10; j <= 99; j++) {
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}
