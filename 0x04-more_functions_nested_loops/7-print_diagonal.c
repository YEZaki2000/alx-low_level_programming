#include "main.h"

/**
* print_diagonal - kljfksdajf
* @n: input number.
*
* Return: Nll
*/

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{	
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < (i + 1); space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{	
		_putchar('\n');
	}
}
