#include "main.h"
/**
*print_diagonal - print a diagonal line on the screen
*Description: print diagonal line on terminal
*Return: Always 0
*@n: first number
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(46);
	}
	_putchar(82);
	_putchar('\n');
	}
	}
}
