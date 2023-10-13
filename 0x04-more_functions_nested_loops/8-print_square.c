#include "main.h"

/**
* print_square - prints a square,
* followed by a new lin
* @size: input size
*
* Return: Null
*/

void print_square(int size)
{
	int i, y;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (y = 0; y < size; y++)
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
