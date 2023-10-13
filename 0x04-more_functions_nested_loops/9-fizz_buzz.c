#include "main.h"

/**
* main - a program that prints the numbers
* from 1 to 100, followed by a new line. 
* But for multiples of three print Fizz instead of
* the number and for the multiples of five print Buzz.
* For numbers which are multiples of 
* both three and five print FizzBuzz.
*
* Return: 0.
*/

int main(void)
{
	int i, x, y, z;
	char fizz[50] = "Fizz ";
	char buzz[50] = "Buzz ";
	char fizzbuzz[50] = "FizzBuzz ";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			for (x = 0; x <= 25; x++)
			{
				_putchar(fizz[x]);
			}
		} else if (i % 5 == 0)
		{
			for (y = 0; y <= 25; y++)
			{
				_putchar(buzz[y]);
			}
		} else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			for (z = 0; z <= 25; z++)
			{
				_putchar(fizzbuzz[z]);
			}
		} else
		{
			if (i / 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar(i%10 + '0');
			_putchar(' ');
		}
	}

	return (0);
}
