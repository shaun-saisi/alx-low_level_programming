#include "3-calc.h"

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/**
 * op_add - function to perform addition operation
 * @a: first integer in the operation
 * @b: second integer in the operation
 *
 * Return: an integer
 */

int op_add(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - function to perform subtraction operation
 * @a: first integer in the operation
 * @b: second integer in the operation
 * Return: an integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to perform multiplication operation
 * @a: first integer in the operation
 * @b: second integer in the operation
 *
 * Return: an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to perform division operation
 * @a: first integer in the operation
 * @b: second integer in the operation
 *
 * Return: an integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to perform modulus operation
 * @a: first integer in the operation
 * @b: second integer in the operation
 *
 * Return: an integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
