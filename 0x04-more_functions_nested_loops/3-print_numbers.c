#include "main.h"

/**
 * print_numbers - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Null
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
