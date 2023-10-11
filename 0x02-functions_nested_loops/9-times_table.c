#include <stdio.h>

/**
* times_table() - prints the 9 times table,
* starting with 0.
*
* Return: Null.
*/

void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			printf("%d * %d", y, i);
		}
	}
}