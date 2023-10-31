#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(char) * size);
	str[0] = c;

	return (str);
}
