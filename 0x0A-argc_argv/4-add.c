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

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			continue;
		}
		res += atoi(argv[i]);
		
	}
	printf("%d\n", res);

	return (0);
}
