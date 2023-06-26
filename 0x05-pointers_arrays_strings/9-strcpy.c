#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: destination to be copied to
 * @src: the source to copy
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *temp = src;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (temp);

}
