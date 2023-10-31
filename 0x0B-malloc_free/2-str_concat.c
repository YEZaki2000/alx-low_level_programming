#include "main.h"

/**
 * str_concat - lksjdfkj
 * @s1: lkjsdf
 * @s2: lksjdf
 * Return: lksjdf
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, s1lngh, s2lngh;

	s1lngh = strlen(s1);
	s2lngh = strlen(s2);
	s = malloc(sizeof(s1) + sizeof(s2));
	strcpy(s, s1);
	for (i = 0; i < s2lngh; i++)
	{
		s[s1lngh + i] = s2[i];
	}

	return (s);
}
