#include "hash_tables.h"

/**
 * hash_table_create - To create a hash table
 * @size: its size of the array
 *
 * Return: If error - NULL
 *      or - a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht); // Free the previously allocated memory for ht
        return (NULL);
    }

    i = 0;
    while (i < size)
    {
        ht->array[i] = NULL;
        i++;
    }

    return (ht);
}

