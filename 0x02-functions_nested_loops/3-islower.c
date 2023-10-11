#include <ctype.h>

/**
* _islower() -  a function that checks for
* lowercase character.
*
* Return: 0 or 1.
*/

int _islower(int c)
{
	if (putchar(islower(c)) == 1)
	{
		return 1;
	} else
	{
		return 0;
	}
}
