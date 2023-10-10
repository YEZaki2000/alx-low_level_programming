#include <stdio.h>

/**
* main - craetes a function that prints the alphabet,
* in lowercase, followed by a new line.
*
* Return: 0.
*/

int main(void)
{
	char ch;
	void print_alphabet(void) {
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	};

	return (0);
}
