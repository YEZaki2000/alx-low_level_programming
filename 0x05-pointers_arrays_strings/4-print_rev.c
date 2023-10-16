#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: input string.
 * Return: Null.
 */

void print_rev(char *s)
{
	int i, lngh;

	lngh = strlen(s);
	for (i = lngh - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
