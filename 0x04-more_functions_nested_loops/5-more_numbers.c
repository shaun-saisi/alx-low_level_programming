#include "main.h"
/**
 *more_numbers - print numbers 
 *Description: prints 10 times numbers from 0-14
 *Return: Always 0 success
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
		{
		_putchar('0' + y / 10);
		}
	_putchar('0' + y % 10);
	}
	_putchar('\n');
	}
}
