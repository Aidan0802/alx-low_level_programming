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

	while (ht->table[index] != NULL)
	{
		if (strcmp(ht->table[index]->key, key) == 0)
		{
		    return (ht->table[index]->value);
		}
		index = (index + 1) % TABLE_SIZE;
	}
	return (NULL);
}
