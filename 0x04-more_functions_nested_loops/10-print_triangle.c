#include "main.h"

/**
* print_triangle - kljfksdajf
* @size: input number.
*
* Return: Nll
*/

void print_triangle(int size)
{
	int i, space; ch;

	if (n > 0)
	{	
		for (i = 0; i < size; i++)
		{
			for (space = (size - i)); space > 0; space--)
			{
				_putchar(' ');
			}
			for (ch = 0; ch < i; ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		
	} else
	{	
		_putchar('\n');
	}
}
