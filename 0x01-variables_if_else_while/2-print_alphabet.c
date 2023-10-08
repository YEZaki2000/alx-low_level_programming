#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
