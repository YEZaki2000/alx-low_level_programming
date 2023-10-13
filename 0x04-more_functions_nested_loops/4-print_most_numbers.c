#include "main.h"

/**
 * print_most_numbers - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Null
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
		_putchar("%d", num);
	}
	_putchar("\n");

	return (0);
}
