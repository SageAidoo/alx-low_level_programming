#include <stdio.h>

int print_sign(int n) {
  if (n > 0) {
    printf("1 +");
    return 1;
  } else if (n == 0) {
    printf("0 0");
    return 0;
  } else {
    printf("-1 -");
    return -1;
  }
}
