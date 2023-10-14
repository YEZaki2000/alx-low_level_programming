#include "main.h"

/**
* print_diagonal - a function that draws
* a diagonal line on the terminal.
* @n: input number.
*
* Return: Null.
*/

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = 1; space < (i + 1); space++)
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
