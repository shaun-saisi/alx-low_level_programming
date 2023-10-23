#include "main.h"
/**
*_memeset -fill a block of memory with a value
* @s: starting address of memory to be filled
* @b: the value
* @n: number of bytes to be changed
*
* Return: Changed array with the new value for n bytes
* */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (;n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
