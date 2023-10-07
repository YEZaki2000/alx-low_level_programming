#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, 
 * followed by a new line.
 * 
 * Return: 0 
 */

int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
