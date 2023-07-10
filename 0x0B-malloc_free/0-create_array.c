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
	char *buffer = malloc(size);

	if (size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	free(buffer);
	return (buffer);
}
