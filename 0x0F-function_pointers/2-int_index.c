#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to search for an index
 * @array: array to be searched for an index
 * @size: size of the array
 * @cmp: comparison for the array to find the index
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	 int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) == 1)
	return (a);
	}
	return (-1);
}
