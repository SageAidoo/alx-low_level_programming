int main() {
    int i, j, k;

    printf("All possible different combinations of three digits:\n");
    for (i = 0; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            for (k = j + 1; k <= 9; k++) {
                printf("%d%d%d ", i, j, k);
            }
        }
        printf("\n");
    }

    return 0;
}
