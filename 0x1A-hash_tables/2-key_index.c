#include "hash_tables.h"

/**
 * key_index - hash to return the index of a key
 * @key: key of the node
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res = hash_djb2(key) % size;

	return (res);
}
