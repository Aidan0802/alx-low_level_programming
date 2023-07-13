#include <stdlib.h>

/**
 * _calloc - allocated memory for an array
 *
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: returns pointer to allocated memory
 * if nmemb or size is 0 return 0
 * if malloc fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char **arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = malloc(size * sizeof(char));

	return (arr);
}
