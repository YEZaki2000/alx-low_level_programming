#include "main.h"

/**
* _isdigit -  a function that checks for
* lowercase character.
* @c: character to be checked.
*
* Return: 0 or 1.
*/

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}
