#include <stdlib.h>

/**
 * array_range - creates array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: The pointer to newly created array
 * return NULL if fails
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * max + 1 - min);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		arr[i] = min;

	return (arr);
}
