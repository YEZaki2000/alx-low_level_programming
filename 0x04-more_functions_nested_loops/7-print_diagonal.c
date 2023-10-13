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
			for (space = 0; space < (n - 1); space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	} else
	{	
		_putchar('\\');
	}
}
