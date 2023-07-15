include <stdio.h>

int main() {
  char ch;

  // Print the alphabet in lowercase.
  for (ch = 'a'; ch <= 'z'; ch++) {
    printf("%c ", ch);
  }
  printf("\n");

  // Print the alphabet in uppercase.
  for (ch = 'A'; ch <= 'Z'; ch++) {
    printf("%c ", ch);
  }

  return 0;
