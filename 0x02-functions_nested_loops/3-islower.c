#include <ctype.h>
#include <stdio.h>

/**
* _islower -  a function that checks for
* lowercase character.
* c: character to be checked.
*
* Return: 0 or 1.
*/

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
