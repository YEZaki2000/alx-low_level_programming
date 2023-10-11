#include <stdio.h>

/**
* print_last_digit() - prints the last digit
* of a number.
*
* Return: Null.
*/

int print_last_digit(int n)
{
	int lastDigit = (n % 10);
	printf("%d", lastDigit);
	/*putchar('\n');*/
	
	return (lastDigit);
}
