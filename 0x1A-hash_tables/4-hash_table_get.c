#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key to retrieve
 * Return: Value associated with the element
 * or NULL if key cant be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = hash(key);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
		    return (ht->array[index]->value);
		}
		index = (index + 1) % TABLE_SIZE;
	}
	return (NULL);
}

/**
 * hash - Convert a given key into an index within the hash table's array.
 * @key: key looking for
 * Return: index
 */

unsigned int hash(const char *key)
{
	unsigned int hash_value = 0;

		while (*key)
		{
			hash_value = (hash_value * 31) + *key;
			key++;
		}
	return (hash_value % TABLE_SIZE);
}
