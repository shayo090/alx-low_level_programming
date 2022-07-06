#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func -gets correct function to perform operation
 * @s : operator passed as argument to the program
 * Return : pointer to the function that correspond to the operator
 */

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

    while (i < 5)
    {
	    if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
    }
    return (NULL);
}
