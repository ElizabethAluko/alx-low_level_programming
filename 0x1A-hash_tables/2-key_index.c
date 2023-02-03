#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: the key.
 * @size: The size of the array of the hash table.
 * Return: the index at which the key/value pair should be.
 * stored in the array of the hash table.
 * Description: Uses hash_djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
