#include "main.h"

/**
 * print_array - prints n elements
 * of an array of integers, followed by a new line.
 * @a: input array.
 * @n: input num.
 * Return: Null.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		} else
		{
			_putchar('\n');
		}
	}
}
