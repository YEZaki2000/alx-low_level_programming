#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all the alphabet letter except
 * q and e, all in lowercase.
 * 
 * Return: 0 
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		while(character != 'q' || 'e')
		{
			putchar(character);
		}
	}
	putchar('\n');

	return (0);
}
