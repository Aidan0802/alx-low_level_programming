#include "main.h"

/**
 * clear_bit - Sets bit value at given index to 0
 *
 * @n: address of input
 * @index: Of bit that needs to be set
 * Return: 1 (Success). 0 (Fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
