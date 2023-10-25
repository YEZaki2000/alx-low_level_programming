#include "main.h"

/**
  * _print_rev_recursion - kljsdkfj
  * @s: lksjdf
  * Return: lkjsdf
  */

void _print_rev_recursion(char *s)
{
	int lngh;

	lngh = strlen(s);
	while (lngh >= 0)
	{
		printf("%c\n", s[lngh - 1]);
	lngh --;
	_print_rev_recursion(s);

	}
	printf("%c\n", s[lngh - 1]);
	lngh --;
	_print_rev_recursion(s);
}
