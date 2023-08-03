#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns bit of given index
 *
 * @n: unsigned integer
 * @index: bit value to get
 * Return: Returns bit value at index
 * otherwise -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
