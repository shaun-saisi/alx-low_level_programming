#include "main.h"

/*
* print_rev - Prints a string in reverse followed by a new line
* @s: The string to print in reverse
*/
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (*s != '\0')
		{
		length++;
		s++;
		}

	for (i = length; i >= 0; i--)
		{
		_putchar(*s);
		s--;
		}

	_putchar('\n');
}
