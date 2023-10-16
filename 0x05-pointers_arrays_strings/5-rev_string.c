#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: Null.
 */

void rev_string(char *s)
{
	int i, lngh;
	char *srev;

	srev = strrev(s);
	lngh = strlen(srev);
	for (i = 0; i < lngh; i++)
	{
		_putchar(srev[i];
	}
	_putchar('\n');
}
