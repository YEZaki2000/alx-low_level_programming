#include <ctype.h>

/**
* _isalpha - checks for alphabetic
* character.
* @c: character to be checked.
*
* Return: 0 or 1.
*/

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}
