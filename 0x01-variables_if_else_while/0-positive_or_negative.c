#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if the value of a random variable
 * n is greater than or less than zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Cheking if n is positive, negative, or is zero. */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
