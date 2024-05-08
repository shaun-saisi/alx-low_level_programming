#include "search_algos.h"

/**
 * rec_search - Implements the Binary search algorithm to find a value in an array of integers.
 *
 * This function uses a recursive approach to search for a specified value within the given array using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for within the array.
 *
 * Return: Index of the value if found; otherwise, -1 if the array is NULL, empty, or if the value is not present.
 */
int rec_search(int *array, size_t size, int value)
{
    size_t half = size / 2;
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array");

    for (i = 0; i < size; i++)
        printf("%s %d", (i == 0) ? ":" : ",", array[i]);

    printf("\n");

    if (half && size % 2 == 0)
        half--;

    if (value == array[half])
    {
        if (half > 0)
            return (rec_search(array, half + 1, value));
        return ((int)half);
    }

    if (value < array[half])
        return (rec_search(array, half + 1, value));

    half++;
    return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Invokes rec_search to perform a binary search.
 *
 * This function calls the rec_search function to execute a binary search for the given value within the specified array.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for within the array.
 *
 * Return: Index of the value if found; otherwise, -1 if the array is NULL, empty, or if the value is not present.
 */
int advanced_binary(int *array, size_t size, int value)
{
    int index;

    index = rec_search(array, size, value);

    if (index >= 0 && array[index] != value)
        return (-1);

    return (index);
}

