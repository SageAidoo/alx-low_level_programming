include <stdio.h>

void times_table(void) {
  int number;
 
  for (number = 0; number <= 9; number++) {
    for (int multiplier = 1; multiplier <= 9; multiplier++) {
      printf("%d * %d = %d\n", multiplier, number, multiplier * number);
    }
  }
}
