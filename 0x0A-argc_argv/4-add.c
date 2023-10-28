#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - klsjdf
 * @argc: ksjdlf
 * @argv: klsdjf
 * Return: lkdsjf
 */

int main(int argc, char *argv[])
{
	int i, res;

	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (argv[i] < 0)
		{
			continue;
		}
		res += argv[i];
	}

	return (0);
}
