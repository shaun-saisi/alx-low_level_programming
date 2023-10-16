#include "main.h"

/*
 * puts2 - function prints every other character of a string 
 * @str: string to be printed
 *
 * Return: printed characters
 */

void puts2(char *str)
{
	int i = 0;

	for ( i = 0; str[i] !='\0'; i +=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}	
