#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: unsigned integer
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(sizeof(*mem) * b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
