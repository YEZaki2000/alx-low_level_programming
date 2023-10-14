#include "main.h"

/**
* print_triangle - a function that prints
* a triangle, followed by a new line.
* @size: input number.
*
* Return: Null.
*/

void print_triangle(int size)
{
	int i, space, ch;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for ((space = (size - i - 1)); space > 0; space--)
			{
				_putchar(' ');
			}
			for (ch = 0; ch < (i + 1); ch++)
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
