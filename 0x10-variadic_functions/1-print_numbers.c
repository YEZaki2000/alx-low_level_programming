#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - lksjdf
 * @separator: lkjsdf
 * @n: lksdjf
 * Return: lksjdf
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i;
    va_list ptr;
    va_start(ptr, n);

    for (i = 0; i < (int)n; i++)
    {
        if (i == ((int)n - 1))
        {
            printf("%d", va_arg(ptr, const unsigned int));
        } else
        {
            if (separator != NULL)
            {
                printf("%d%s", va_arg(ptr, const unsigned int), separator);
            } else
            {
                printf("%d", va_arg(ptr, const unsigned int));
            }
        }
    }

    va_end(ptr);

    printf("\n");
}
