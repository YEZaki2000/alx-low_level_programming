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
		putchar(45);
		return (-1);
	} else if (n > 0)
	{
		putchar(43);
		return (1);
	} else
	{
		putchar(48);
		return (0);
	}
}
