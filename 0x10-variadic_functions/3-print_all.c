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
} mystruct;

void print_all(const char * const format, ...)
{
	va_list ptr;
	int lngh;
	char *separator = ", ";
	mystruct mytypes[4] = {
		{c},
		{i},
		{f},
		{s}
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
				switch(format)
				{
					case 'c':
						printf("%s%c", separator, va_arg(ptr, int));
						break;
					case 'i':
						printf("%s%d", separator, va_arg(ptr, int));
						break;
					case 'f':
						printf("%s%f", separator, va_arg(ptr, double));
						break;
					case 's':
						printf("%s%s", separator, va_arg(ptr, char *));
						break;
				}
			}
			y++;
		}
		i++;
	}
	va_end(ptr);

	printf("\n");
}
