#include <stdio.h>
void swap_integers(int *a, int *b);
int main(void)
{
int a = 10;
int b = 20;
printf("Before swapping, a = %d and b = %d\n", a, b);
swap_integers(&a, &b);
printf("After swapping, a = %d and b = %d\n", a, b);
return 0;
}
