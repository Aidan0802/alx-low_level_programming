#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameters
 *
 * @array: array if integers
 * @size: size of array
 * @action: pointer function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
