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
	dest = strncat(dest, src, n);
	return(dest);
}
