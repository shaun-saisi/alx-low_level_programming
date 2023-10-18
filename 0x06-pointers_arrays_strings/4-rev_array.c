#include "main.h"
/**
*reverse_array -  it reverses the contents of an array
*@n: length of the array
*@a: array to be revesed
*Return: always 0
*/
void reverse_array(int *a, int n)
{
	int k = 0;

	int q = n - 1;

	while (k < q)
	{

	int temp = a[k];

	a[k] = a[q];

	a[q] = temp;

	k++, q--;
	}
}
