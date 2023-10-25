#include "main.h"
/**
 * *factorial - gives the factorial of a number
 * *@n: the integer to be checked
 * *Return: the factorial of n
 * */
int factorial(int n)
{
		if (n < 0)
				return (-1);

			if (n == 1)
					return (1);

				else
						return (n * factorial(n - 1));
}
