#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the alphabet in lower cse followed bt=y a new line
 * Return: void
 */
int main(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	putchar(alphabets);
	}
	putchar('\n');
	
	return (0);
}	
