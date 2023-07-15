#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is grater than 5\n",
				n, n % 20);
	}
	else if (( n % 20) < 6 && (n % 20) !=0)
	{
		printf ("last digit of &d is %d and is less than 6 and not 0\n",
				n, n % 20);
	}
	else 
	{
		printf("last digit of %d is %d and 0\n", 
				n, n,%20);
	
	return (0);
