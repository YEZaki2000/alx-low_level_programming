#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - kljsdf
 * @argc: lksjf
 * @argv: lksjdf
 * Return: lksjdf
 */

int main(int argc, char *argv[])
{
    int res;
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("argv: %s\n", argv[i]);
    }

    printf("argc: %d\n", argc);
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
    printf("%d\n", res);

    return (0);
}
