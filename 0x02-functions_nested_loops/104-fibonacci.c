#include <stdio.h>

int main(void) {
  int previous_number = 1;
  int current_number = 2;

  printf("%d, %d, ", previous_number, current_number);

  for (int i = 3; i <= 98; i++) {
    int next_number = previous_number + current_number;

    printf("%d, ", next_number);

    previous_number = current_number;
    current_number = next_number;
  }

  printf("\n");

  return 0;
}
