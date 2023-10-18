#include "main.h"
/**
*_strncpy - copies a string
*@dest: destination of the string where it is copied to
*@src: source where string is copied from
*@n: index value of dest
*Return: always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest);
}
