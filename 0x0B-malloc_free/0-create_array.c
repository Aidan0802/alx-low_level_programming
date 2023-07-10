#include <stdlib.h>

/**
 * create_array - creates a array of chars
 *
 * @size: unsigned integer
 * @c: input character
 *
 * Return: returns 0 if size is 0
 * otherwise returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer = NULL;
	*buffer = malloc(size);

	if (*buffer == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
	free(buffer);
}
