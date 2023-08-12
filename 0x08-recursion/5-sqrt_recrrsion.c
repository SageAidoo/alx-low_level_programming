#include "main.h"

int _sqrt_recursion(int n) {
  if (n == 0 || n == 1) {
    return n;
  }

  int low = 0;
  int high = n;
  int mid = (low + high) / 2;

  while (low <= high) {
    if (mid * mid == n) {
      return mid;
    } else if (mid * mid < n) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }

    mid = (low + high) / 2;
  }

  return -1;
}
