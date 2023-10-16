#include "main.h"

/**
 * puts - function that prints a string,
 * followed by a new line, to stdout
 * @str: input string.
 * Return: Null.
 */

void _puts(char *str)
{
	int i, lngh;

	lngh = strlen(str);
	for (i = 0; i <= lngh; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
