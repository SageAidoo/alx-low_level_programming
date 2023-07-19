#include <stdio.h>

void print_first_50_fibonacci_numbers(void) {
  int first_number = 1;
  int second_number = 2;
  int current_number;

  printf("%d, %d, ", first_number, second_number);

  for (int i = 3; i <= 50; i++) {
    current_number = first_number + second_number;
    printf("%d, ", current_number);

    first_number = second_number;
    second_number = current_number;
  }

  printf("\n");
}

int main(void) {
  print_first_50_fibonacci_numbers();

  return 0;
}
