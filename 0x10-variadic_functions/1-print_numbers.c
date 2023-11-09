#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers followed by a new line
 * @separator: initial number of items in the variadic function
 * @n: one of the attributes in the variadic function
 * @... variadic function indicators
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int x;

	va_start(op, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(op, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}	printf("\n");

	va_end(op);
}
