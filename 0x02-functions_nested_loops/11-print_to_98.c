#include "main.h"
#include <stdio.h>

/**
 * print_numbers_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: point of start
 */
void print_numbers_to_98(int n)
{
	if (n <= 98)
	{
	for (n = n; n <= 97; n++)
	printf("%d, ", n);
	}
	else
	for (n = n; n > 98; n--)
	printf("%d, ", n);
	printf("98\n");
}
