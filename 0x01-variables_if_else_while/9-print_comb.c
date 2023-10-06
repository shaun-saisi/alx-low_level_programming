#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints out all possible combinations of a single digit number
 * Return: Always(success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	if (digit !='9')
	{
	putchar(',');
	putchar(' ');
	}
	}putchar('\n');
	
	return(0);	
}	
