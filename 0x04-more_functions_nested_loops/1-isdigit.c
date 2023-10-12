#include "main.h"
/**
 *_isdigit - checks whether a character is a digit or not
 *@c: character
 *Return: 0 always success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
