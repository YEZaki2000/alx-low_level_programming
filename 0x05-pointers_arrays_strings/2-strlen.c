#include "main.h"

/**
 * _strlen - function that returns
 * the length of a string.
 * @s: input string.
 * Return: length of the string.
 */


int _strlen(char *s)
{
	char str[50];
	int slength;

	*s = &str;
	slength = strlen(str);

	return (slength);
}
