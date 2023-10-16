#include "main.h"

/*
* print_rev - Prints a string in reverse followed by a new line
* @s: The string to print in reverse
*/
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
		{
		length++;
		i--;
		}

	for (i = length - 1; i >= 0; i--)
		{
		_putchar(s[i]);
		s--;
		}

	_putchar('\n');
}
