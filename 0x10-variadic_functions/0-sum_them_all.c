#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - kjshdfkjsksfdj
 * @n: lksjdf
 * Return: lksdjf
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ptr, const unsigned int);
	}

	va_end(ptr);

	return (sum);
}
