#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of type integer
 * @size: size of array
 * @cmp: function pointer to compare
 *
 * Return: The index of the first element
 * if no element matches or size is 0 or less
 * function returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL)
		return (NULL);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);

		if (res)
			return (i);
	}

	return (-1);
}
