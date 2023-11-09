#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -function to sum all its parameters
 * @n: The firt parameter of the variadic function
 * @... Avariable description for unlimited elements
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int a, sum = 0;

	va_start(op, n);

	for (a = 0; a < n; a++)
	sum += va_arg(op, int);

	va_end(op);

	return (sum);
}
