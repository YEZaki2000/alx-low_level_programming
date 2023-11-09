#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - lksdjfkj
 * @separator: lksjdf
 * @n: kjsf
 * Return: lksjdf
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    int i;
    va_list ptr;
    
    va_start(ptr, n);

    for (i = 0; i < (int)n; i ++)
    {
        if (i == ((int)n - 1))
        {
            printf("%s", va_arg(ptr, char *));
        } else
        {
            if (separator != NULL)
            {
                printf("%s%s", va_arg(ptr, char *), separator);
            } else
            {
                printf("%s", va_arg(ptr, char *));
            }
        }
    }

    va_end(ptr);

    printf("\n");
}
