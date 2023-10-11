#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: Is the key
 * @size: Hash table size
 * Return: Index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
