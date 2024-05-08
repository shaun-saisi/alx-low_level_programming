#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Implements the Jump search algorithm to find a value in an array of integers.
 *
 * This function performs a search for a specified value within the given array using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for within the array.
 *
 * Return: Index of the value if found; otherwise, -1 if the array is NULL, empty, or if the value is not present.
 */
int jump_search(int *array, size_t size, int value)
{
    int index, m, k, prev;

    if (array == NULL || size == 0)
        return (-1);

    m = (int)sqrt((double)size);
    k = 0;
    prev = index = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return (index);
        k++;
        prev = index;
        index = k * m;
    } while (index < (int)size && array[index] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}

