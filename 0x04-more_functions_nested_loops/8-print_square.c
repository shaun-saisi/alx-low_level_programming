#include "main.h"
/**
*print_square - Prints n squares according to n number of times
*Return: always 0 success
*@size: The number of times it is printed
*Description: prints a square 
*/
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
