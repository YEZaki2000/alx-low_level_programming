#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: Null.
 */

void rev_string(char *s)
{
	int i, lngh;
	char *srev[];

	srev = strrev(s);
	lngh = strlen(s);
	for (i = 0; i < lngh; i++)
	{
		s[i] = srev[i];
	}	
	_putchar('\n');
}
