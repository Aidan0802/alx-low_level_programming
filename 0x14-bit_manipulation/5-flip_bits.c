#include "main.h"
#include <stdio.h>

/**
 * flip_bits - calculates number of bits
 * to flip to switch from one number to other
 *
 * @n: number input
 * @m: number to switch to
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = n ^ m;
	unsigned int i = 1;

	while (flip > 0)
	{
		i += (flip >> 1) & 1;
		flip = flip >> 1;
	}

	return (i);
}
