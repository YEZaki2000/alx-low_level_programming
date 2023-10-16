#include "main.h"

/**
 * _strlen - function that returns
 * the length of a string.
 * @s: input string.
 * Return: length of the string.
 */


int _strlen(char *s)
{
	int str, slength;

	str = *s;
	slength = strlen(str);

	return (slength);
}
