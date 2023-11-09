#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print strings followed by a new line
 * @separator: the string to be printed
 * @n: the number of times the string is to be printed
 * @... variadic function indicator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int x;
	char *str;

	va_start(op, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(op, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(op);
}
