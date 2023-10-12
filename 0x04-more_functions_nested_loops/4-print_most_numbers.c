#include "main.h"
/**
 *print_most_numbers - prints 0-9 without 2 and 4
 *Description: print 0-9 excluding 2 and 4
 *Return: always 0 success
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	if (a != 2 && a != 4)
		{
		_putchar('0' + a);
		}
	}
	_putchar('\n');
}
