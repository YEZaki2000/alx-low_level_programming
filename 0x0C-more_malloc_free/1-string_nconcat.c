#include "main.h"

/**
 * string_nconcat - lksjdf
 * @s1: lksjdf
 * @s2: ksjdf
 * @n: lksdjfk
 * Return: lksdjfk
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, lngh;

	s = malloc(sizeof(s1) + sizeof(s2));
	strcpy(s, s1);

	lngh = strlen(s);
	for (i = 0; i < (int) n; i++)
	{
		s[lngh + i] = s2[i];
	}

	return (s);
}
