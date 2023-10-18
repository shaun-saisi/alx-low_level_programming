#include "main.h"

/**
*_strncat - concatenates two strings
*@src: the source string
*@dest: the destination string
*@n: the number of index space
*Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;	
	}
	*dest = '\0';
	return (dest);
}
