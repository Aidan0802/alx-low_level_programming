#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: name given
 * @age: age given
 * @owner: owner given
 *
 * Return: NULL if program fails
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
