#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc allocated memory
 *
 * @d: adress of allocated memory
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
