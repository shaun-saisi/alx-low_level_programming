#include "main.h"

/*
*_puts_recursion - prints a string
*Return:
*@s: the pointer to the string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	else
	_putchar(*s);
	_puts_recursion(s + 1);
}
