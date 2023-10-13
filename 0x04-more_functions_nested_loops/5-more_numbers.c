#include "main.h"

/**
 * more_numbers - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Null
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			_putchar("%d", num);
		}
		_putchar("\n");
	}

	return (0);
}
