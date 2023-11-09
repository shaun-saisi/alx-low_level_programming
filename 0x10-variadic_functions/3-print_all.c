#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function to print anything passed through it
 * @format: type of arguments in the function
 * @.... variadic function
 */

void print_all(const char * const format, ...)
{

	va_list print;

	int x = 0;
	char *str, *sup = "";

	va_start(print, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sup, va_arg(print, int));
					break;

				case 'i':
					printf("%s%d", sup, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", sup, va_arg(print, double));
					break;
				case 's':
					str = va_arg(print, char *);
					if (!str)
						str = ("nil");
					printf("%s%s", sup, str);
					break;
				default:
					x++;
					continue;
			}
			sup = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(print);
}
