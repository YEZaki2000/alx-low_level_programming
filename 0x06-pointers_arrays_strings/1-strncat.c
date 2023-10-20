#include "main.h"

/**
  * *_strncat - concatenates two strings.
  * @dest: kjsddfkld
  * @src: kdfjs
  * @n:  kjfsdk
  * Return: char
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	dest = strncat(dest, src, n);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
