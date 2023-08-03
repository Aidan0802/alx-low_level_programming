#include "main.h"

/**
 * set_bit - sets bit at given index
 *
 * @n: address of value
 * @index: index to set
 * Return: 1 (Succesful) 0 (Fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | 1 << index;

	if (*n & index)
		return (1);
	else
		return (0);
}
