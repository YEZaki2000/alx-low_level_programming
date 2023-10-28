#include <stdlib.h>
#include <stdio.h>

/**
 * main - lskadjfl
 * @argc: lksjdf
 * @argv: lksjdfk
 * Return:  kldsjf
 */

int main(int argc, char *argv[])
{
	int i, res, counter, cents;
	int coins[] = {25, 10, 5, 2, 1};
	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = 0;
	counter = 0;

	for (i = 0; i <= 5; i++)
	{
		if (cents < 0)
		{
			printf("0\n");
			break;
		}
		if (res > cents)
		{
			res -= coins[i - 1];
			counter--;
		}
		if (res == cents)
		{
			printf("%d", counter);
			printf("\n");
			break;
		}
		while (res < cents)
		{
			res += coins[i];
			counter++;
		}
	}
	return (0);
}
