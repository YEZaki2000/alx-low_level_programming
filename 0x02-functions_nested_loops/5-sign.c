#include <stdio.h>

/**
* print_sign() - prints the sign of a number.
*
* Return: -1, 0, or 1.
*/

int print_sign(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (-1);
	} else if (n > 0)
	{
		printf('+');
		return (1);
	} else
	{
		printf('0');
		return (0);
	}
}
