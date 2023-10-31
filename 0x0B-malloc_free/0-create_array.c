#include "main.h"

/**
 * create_array - lksjdf
 * @size: lksjdf
 * @c: klsjdf
 * Return: lksjdf
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(char) * size);
	str[0] = c;

	return (str);
}
