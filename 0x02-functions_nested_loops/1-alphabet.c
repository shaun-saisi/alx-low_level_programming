#include "main.h"
#include <stdio.h>
/**
 * main - prints out the alphabet from a to z
 * Return: Always(success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	_putchar('\n');
}
