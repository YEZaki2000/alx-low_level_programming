#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: input str.
 * Return: Null.
 */

void puts_half(char *str)
{
	int i, half;

	half = (lngh / 2);
	for (i = half; i < lngh; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
