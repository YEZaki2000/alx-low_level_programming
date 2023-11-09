#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - lksjdf
 * @format: lksjdf
 * Return: lksjdf
 */

typedef struct something
{
	char *formatt;
	char *type;
} mystruct;

void print_all(const char * const format, ...)
{
	va_list ptr;
	int lngh;
	mystruct mytypes[4] = {
		{c, char},
		{i, int},
		{f, float},
		{s, char *}
	};

	lngh = strlen(format);
	
	va_start(ptr, lngh);
	
	int i = 0;
	while (i < lngh)
	{
		int y = 0;
		while (y < 4)
		{
			if (strcmp(format, mytypes[y].formatt) == 0)
			{
				printf(va_arg(ptr, mytypes[y].type));
			}
			y++;
		}
		i++;
	}
	va_end(ptr);
}
