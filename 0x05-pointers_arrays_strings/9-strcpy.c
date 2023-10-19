#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, lngh;

	lngh = strlen(src);
	for (i = 0; i <= lngh; i++)
	{
		dest[i] = src[i];
	}
}
