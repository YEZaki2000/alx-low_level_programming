#include <stdio.h>

/**
* print_to_98() - prints all natural numbers
* from n to 98, followed by a new line.
*
* Return: Null
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	} else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	} else
	{
		printf("%d", n);
	}
}
