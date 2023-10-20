#include "main.h"

/**
  * *cap_string - ksjdfk
  * @c: kdjaf
  * Return: jklfsdj
  */

char *cap_string(char *c)
{
	int i, lngh;
	char *space = " ";
	char *tab = "\t";
	char *dot = ".";

	lngh = strlen(c);
	for (i = 0; i < lngh; i++)
	{
		if ((i == 0) || (c[i - 1] == *space) || (c[i - 1] == *tab) || (c[i - 1] == *dot))
		{
			c[i] = toupper(c[i]);
		}
	}
	return(c);
}
