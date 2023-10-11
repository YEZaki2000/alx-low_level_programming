#include <stdio.h>

/**
* print_last_digit() - prints the last digit
* of a number.
*
* Return: Null.
*/

int print_last_digit(int n)
{
	putchar((n % 10) + '0');
	putchar('\n');
	
	return (n % 10);
}
