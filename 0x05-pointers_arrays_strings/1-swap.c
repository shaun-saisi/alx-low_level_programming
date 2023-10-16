#include "main.h"

/*
* swap_int - Swaps the value of two integers
* @a: Pointer to first integer
* @b: Pointer to second integer
* Description: Function
*
* Return: No return value
*/

void swap_int(int *a, int *b)
{

	int i;

	i = *a;

	*a = *b;
	*b = i;
}
