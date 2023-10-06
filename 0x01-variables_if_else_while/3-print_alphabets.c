#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the alphabet in lowercase and then uppercase followed by a new line
 * Return: always(success)
 */
int main(void)
{

	char lowercase;
	char uppercase;

	for(lowercase = 'a'; lowercase <= 'z'; lowercase++)
	putchar(lowercase);

	for(uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	putchar(uppercase);
	putchar('\n');

	return (0);
}	
