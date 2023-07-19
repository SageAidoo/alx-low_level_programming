#include <stdio.h>

void print_to_98(int n) {
  for (int number = n; number <= 98; number++) {
    printf("%d, ", number);
  }

  printf("%d\n", 98);
}
