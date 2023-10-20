#include "main.h"

/**
 * *_strcat -  concatenates two strings.
 * @dest: ldjskf
 * @src: lfksdjf
 * return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	dest = strcat(dest, src);
	
	while ((dest[i]) != lngh)
	{
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
