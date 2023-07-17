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
	int i, n_len = 0, o_len = 0;

	for (i = 0; name[i]; i++)
		n_len++;
	for (i = 0; owner[i]; i++)
		owner++;

	dog->age = malloc(sizeof(dog_t) * sizeof(int));
	dog->name = malloc(sizeof(dog_t) * n_len);
	dog->owner = malloc(sizeof(dog_t) * o_len);

	if (dog == NULL || dog->name == NULL || dog->owner == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
