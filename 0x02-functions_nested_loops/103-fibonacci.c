#include <stdio.h>

int main(void) {
  int sum = 0;
  int previous_number = 1;
  int current_number = 2;

  while (current_number <= 4000000) {
    if (current_number % 2 == 0) {
      sum += current_number;
    }

    int next_number = previous_number + current_number;
    previous_number = current_number;
    current_number = next_number;
  }

  printf("The sum is %d.\n", sum);

  return 0;
}
