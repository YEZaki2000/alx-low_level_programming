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

	lngh = strlen(s);
	for (i = lngh - 1; i >= 0; i --)
	{
		srev[-i] = s[i];
	}
	for (i = 0; i < lngh; i++)
	{
		s[i] = srev[i];
	}
}
