#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, res, counter, cents;
	int coins[] = {25, 10, 5, 2, 1};
	cents = atoi(argv[1]);

	res = 0;
	counter = 0;

	for (i = 0; i <= 5; i++)
	{
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
