#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - pointer to the function
 * @s: the argument to be passed by the operator
 *
 * Return: a pointer to the function stated
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
	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;

	return (ops[x].f);
}
