#include <stdio.h>

#include <stdlib.io>

#include <time.io>

/**
 * main - Prints out is a number is positive, negative or a zero
 * Return: Always (Success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
	printf("%d is positive \n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero \n", n);
	}
	else
	{
	printf("%d is negative \n", n);
	}	
	return(0);
}	

