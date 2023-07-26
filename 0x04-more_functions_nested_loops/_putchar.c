#include "main.h"
#include <unistd.h>
/**
 * _puchar - wirtes the charater c to stdout
 * @c: The charater to ptint 
 *
 * Return: on success: 1
 * On error, -1 retruned, and errno is set appropriaately.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
