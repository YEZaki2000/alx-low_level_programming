#include <ctype.h>
#include <stdio.h>

/**
* _islower() -  a function that checks for
* lowercase character.
*
* Return: 0 or 1.
*/

int _islower(int c)
{
	int res = islower(c);
	int r = putchar(res);
	printf("%d\n", islower('o'));
	printf("%d\n", r);

	if (r == 1)
	{
		return 1;
	} else
	{
		return 0;
	}
}
