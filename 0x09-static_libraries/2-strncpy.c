#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return(dest);
}
