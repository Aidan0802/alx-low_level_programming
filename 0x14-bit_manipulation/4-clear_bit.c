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
	*n = *n & ~(1 << index);
	
	if (*n & (1 << index))
		return (0);
	else
		return (1);
}
