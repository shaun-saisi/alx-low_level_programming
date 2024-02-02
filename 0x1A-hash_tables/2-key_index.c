#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: The key to get the inde
 * @size: The size of the array of the hash tablfegfnui erifgbe
 * Return: The index of the key.
 * Description: Uses the dthm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
