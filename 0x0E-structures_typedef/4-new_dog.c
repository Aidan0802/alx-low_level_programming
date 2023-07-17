#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog
 *
 * @name: name input
 * @age: age input
 * @owner: owner name input
 *
 * Return: return pointer otherwise NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
