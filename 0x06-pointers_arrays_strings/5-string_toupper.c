#include "main.h"

/**
  * *string_toupper - lksjdfk
  * @*: ksjdf
  * Return: kljdasf
  */

char *string_toupper(char *c)
{
	int i, lngh;

	lngh = strlen(c);
	for (i = 0; i < lngh; i++)
	{
		c[i] = toupper(c[i]);
	}
	return c;
}
