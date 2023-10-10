#include <ctype.h>

/**
* _isalpha() - checks for alphabetic
* character.
*
* Return: 0 or 1.
*/

int _isalpha(int c)
{
	if (isalpha(c) == 1)
	{
		return 1;
	} else
	{
		return 0;
	}
}
