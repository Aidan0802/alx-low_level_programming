#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int check = 1;
	unsigned int *c = &check;
	
	return ((int)*c);
}
