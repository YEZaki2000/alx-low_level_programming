#include <ctype.h>

/**
* _islower() -  a function that checks for
* lowercase character.
*
* Return: 0 or 1.
*/

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return 0;
	} else
	{
		return 1;
	}
}
