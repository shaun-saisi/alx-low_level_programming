#include "main.h"
/**
 * _isalpha - shows if input is alphanumeric or not
 * @c:ASCII code character
 * Return: 1 for alphanumeric 0 if not
 */
int _isalpha(int c)
{
	if(( c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}	
