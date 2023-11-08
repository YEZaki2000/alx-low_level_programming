#include "calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    for (i = 0; i < ((int)(sizeof(ops)/(sizeof(ops[0])))); i++)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            return (ops[i].f);
        }
    }

    return (0);
}
