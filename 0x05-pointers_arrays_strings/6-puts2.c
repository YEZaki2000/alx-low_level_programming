#include "main.h"

/**
 * puts2 - prints every other character
 * of a string, starting with the
 * first character, followed by a new line.
 * @str: input str.
 * Return: Null.
 */

void puts2(char *str)
{
	int i, lngh;

	lngh = strlen(str);
	for (i = 0; i < ((lngh - 1) / 2); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
