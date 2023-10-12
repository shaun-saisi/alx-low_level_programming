#include "main.h"
#include <stdio.h>

/**
*main -prints out numbers from 1 - 100 followed by a new line but for evry multiple of 3 it pr*ints fizz and for multiples of 5 prints buzz
*Return:Always 0 success
*/
int main (void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
		printf("Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
		printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 ==0)
		{
		printf("FizzBuzz");
		}
		else
		{
		printf("%d", a);
		}
	}
}
