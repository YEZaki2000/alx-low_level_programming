#include <stdio.h>

/**
* times_table() - prints the 9 times table,
* starting with 0.
*
* Return: Null.
*/

void times_table(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			int mult;

			mult = i * y;
			if (y != 9)
			{
				if (mult < 10)
				{
					int multnext;

					multnext = i * (y + 1);
					if ((multnext) >= 10)
					{
						printf("%d, ", mult);
					} else
					{
						printf("%d,  ", mult);
					}
				} else
				{
					printf("%d, ", mult);
				}
			} else
			{
				printf("%d\n", mult);
			}
		}
	}
}
