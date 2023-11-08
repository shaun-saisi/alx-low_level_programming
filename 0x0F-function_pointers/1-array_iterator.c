#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to be executed
 * @array: the array to be printed
 * @size: size of the array
 * @action: function to perform on each element of thne array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x
		;
	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
