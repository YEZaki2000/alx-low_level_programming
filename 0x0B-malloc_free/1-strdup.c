#include "main.h"

/**
 * _strdup - lkjsdkfj
 * @str: lksjd
 * Return: lksjdf
 */

char *_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(*str));
	strcpy(s, str);
	
	return (s);
}
