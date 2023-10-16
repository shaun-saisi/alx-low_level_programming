#include "main.h"

/*
 *int_strlen() - returns length of a string
 *@s: String whose length is to be returned
 *Return: Length of the string
 */

int _strlen(char *s)/*Returns the length of the string*/
{
	int length = 0;

	while (*s != '\0')
		{
		length++;
		s++;
		}

	return (length);
}
