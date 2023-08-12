#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);

int main(void) {
  int length = _strlen_recursion("Hello, world!");
  printf("The length of the string is %d.\n", length);
  return 0;
}
