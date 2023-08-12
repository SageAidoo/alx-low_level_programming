#include "main.h"
int wildcmp(char *s1, char *s2) {
  if (s1 == s2) {
    return 1;
  }

  if (len(s1) < len(s2)) {
    return 0;
  }

  int i = 0;
  int j = 0;

  while (i < len(s1) && j < len(s2)) {
    if (s1[i] == s2[j]) {
      i++;
      j++;
    } else if (s2[j] == '*') {
      if (j == len(s2) - 1) {
        return 1;
      }
      j++;
    } else {
      return 0;
    }
  }

  if (i == len(s1) && j == len(s2)) {
    return 1;
  } else {
    return 0;
  }
}
