#include <stdio.h>

int print_last_digit(int n) {
  int last_digit;

  last_digit = n % 10;

  printf("%d\n", last_digit);

  return last_digit;
}

