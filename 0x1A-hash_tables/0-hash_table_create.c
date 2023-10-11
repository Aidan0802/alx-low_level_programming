#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create - Creates a hash table.
 * @size: The size of the array
 * Return: Pointer to the newly created hash table,
 * otherwise return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = malloc(sizeof(has_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(has_table_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}