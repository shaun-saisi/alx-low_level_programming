#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int q = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; k < q ; k++)
	{
		dest[k] = src[k];
	}
	dest[q] = '\0';
	return (dest);
}

