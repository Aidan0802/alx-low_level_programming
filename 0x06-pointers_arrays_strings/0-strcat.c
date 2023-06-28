#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: returns a pointer to resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int a, i, len = 0;

	for (a = 0; dest[a]; a++)
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len + i] += src[i];
	}
	return (dest);

}
