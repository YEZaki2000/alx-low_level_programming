#include <stdio.h>

/**
* jack_bauer() - prints every minute of the day of
* Jack Bauer, starting from 00:00 to 23:59.
*
* Return: 0.
*/

void jack_bauer(void)
{
	for (int x = 0; x < 24; x++)
	{
		
		for (int i = 0; i <+ 60; i++)
		{
			printf("%02d:%02d", x, i);
			putchar('\n');
		}
	}
}
