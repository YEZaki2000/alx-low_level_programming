#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations 
 * of single-digit numbers.
 * 
 * Return: 0 
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		for (num = 0; num < 10; num++)
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
