#include "main.h"

/**
*_strcat - concanates two strings
*@dest: destination of the string
*@src: source of the string
*Return: dest value of the string
*/
char *_strcat(char *dest, char *src)
{


	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return  (dest);
}
