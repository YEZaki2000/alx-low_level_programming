#include "main.h"

/**
 * puts - function that prints a string,
 * followed by a new line, to stdout
 * @str: input string.
 * Return: Null.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
