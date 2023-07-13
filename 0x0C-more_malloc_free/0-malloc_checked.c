#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: unsigned integer
 *
 * Return: pointer to address otherwise
 * 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	char *memp;

	memp = malloc(b);
	if (memp == NULL)
		exit(98);

	return (memp);
}
