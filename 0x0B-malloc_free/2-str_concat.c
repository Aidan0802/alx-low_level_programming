#include <stdlib.h>
#include <stdio.h>

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
	int i, x = 0, len1 = 0, len2 = 0;
	char *buffer = NULL;

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	buffer = malloc(len1 + len2);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		buffer[i] = s1[i];

	for (i = len1; i < len1 + len2; i++)
	{
		buffer[i] += s2[x];
		x++;
	}

	return (buffer);
}
