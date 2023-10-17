#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: Null.
 */

void rev_string(char *s)
{
	int i, lngh;
	char *srev[1000];

	/* srev = strrev(s); */
	lngh = strlen(s);
	for (i = lngh - 1; i >= 0; i--)
	{
		srev[-1] = s[i];
	}
	_putchar('\n');
}
