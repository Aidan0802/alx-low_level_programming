#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns pointer to new memory of concatenated strings
 * returns NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *buffer = NULL;

	buffer = malloc(sizeof(s1) + sizeof(s2));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < s1[i]; i++)
		buffer[i] = s1[i];

	for (; i < sizeof(buffer); i++)
		buffer[i] += s2[i];

	return (buffer);
}
