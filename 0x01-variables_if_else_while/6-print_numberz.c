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
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
