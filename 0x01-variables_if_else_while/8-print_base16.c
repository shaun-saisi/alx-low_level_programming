#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out all numbers in base 16 in lowercase
 * Return: Always(success)
 */
int main(void)
{
	int digit;
	char lowercase;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	putchar(lowercase);
	putchar('\n');

	return (0);	
}	
