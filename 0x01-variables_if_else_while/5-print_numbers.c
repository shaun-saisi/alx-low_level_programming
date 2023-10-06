#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out all single digit numbers of base 10 starting fron flowed by a new line
 *Return: Always(success)
 */

int main(void)
{
	int numbers;

	for(numbers = 0; numbers < 10; numbers++)
	printf("%d", numbers);
	printf("\n");
	
	return (0);	

}


