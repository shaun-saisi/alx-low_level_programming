#include "main.h"

/*
 * rev_string - function reverses a string
 * @s: String to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char t;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		t = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = t;
	}
}
