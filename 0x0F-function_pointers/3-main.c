#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * main - function to print the result of the operations
 * @agrc: The number of arguments supplied to the program
 * @agrv: Array pointers to the arguments
 * Return: integer
 */

int main(int __attribute__((__unused__)) agrc, char *agrv[])
{
	int num1, num2;
	char *op;

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(agrv[1]);
	op = agrv[2];
	num2 = atoi(agrv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
