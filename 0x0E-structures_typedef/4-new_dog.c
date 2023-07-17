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
	int i, n_len = 0, o_len = 0;
	dog_t *dog;

	for (i = 0; name[i]; i++)
		n_len++;

	for (i = 0; owner[i]; i++)
		o_len++;

	if (n_len == 0 || o_len == 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	dog->name = malloc(sizeof(dog_t) * (n_len + 1));
	dog->owner = malloc(sizeof(dog_t) * (o_len + 1));

	if (dog == NULL || dog->name == NULL || dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];

	dog->name[i] = '\0';

	for (i = 0; owner[i]; i++)
		dog->owner[i] = owner[i];

	dog->owner[i] = '\0';

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
