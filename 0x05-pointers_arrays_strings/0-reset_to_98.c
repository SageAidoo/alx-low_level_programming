#include <stdio.h>
void reset_to_98(int *n);
int main() {
int a = 10;
printf("The value of a is: %d\n", a);
reset_to_98(&a);
printf("The value of a is now: %d\n", a);
return 0;
}
