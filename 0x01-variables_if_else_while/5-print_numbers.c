#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d\n", num);
	}

	return (0);
}
