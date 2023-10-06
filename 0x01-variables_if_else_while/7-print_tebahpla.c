#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the lowercase alphabet in reverse followed by a new line
 * Return: Alwqays(success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);
	putchar('\n');

	return (0);	
}	
