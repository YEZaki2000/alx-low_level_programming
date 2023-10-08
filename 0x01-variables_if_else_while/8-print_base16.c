#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16
 * in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char character;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
