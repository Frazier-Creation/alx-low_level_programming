#include "hash_tables.h"

/**
 * key ->index - Get the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The function that gives you index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
