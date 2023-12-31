#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bit at given index
 *
 * @n: address of value
 * @index: index to set
 * Return: 1 (Succesful) 0 (Fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1 << index;

	return (1);
}
