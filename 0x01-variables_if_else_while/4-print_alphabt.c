#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the alphabet in lowercse followed by new line
 * Return: Always (success)
 */
int main(void)

{
	
	char alphabet;
	char e;	
	char q;

	e = 'e';
	q = 'q';

	for (alphabet = 'a'; alphabet = 'z'; alphabet++)
	{
	if (alphabet != e && alphabet != q)	
	putchar(alphabet);
	}
	putchar('\n');
	return (0);       	
}	
