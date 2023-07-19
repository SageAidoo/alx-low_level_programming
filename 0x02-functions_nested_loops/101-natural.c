#include <stdio.h>

int main(void) {
  int sum = 0;
  int number;

  for (number = 1; number < 1024; number++) {
    if (number % 3 == 0 || number % 5 == 0) {
      sum += number;
    }
  }

  printf("The sum is %d.\n", sum);

  return 0;
}
