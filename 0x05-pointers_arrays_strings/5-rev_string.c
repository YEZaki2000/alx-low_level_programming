#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: Null.
 */

void rev_string(char *s)
{
	int i, lngh;

	srev = strcpy(strrev(s));
	lngh = strlen(s);
	for (i = lngh - 1; i >= 0; i--)
	{
		s[i] = srev[i];
	}	
	_putchar('\n');
}
