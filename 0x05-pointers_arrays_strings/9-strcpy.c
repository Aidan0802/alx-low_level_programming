#include "main.h"
#include <stdio.h>
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

	for (i = 0; src[i] >= '\0'; i++)
	{
		dest[i] = src[i];

	}
	printf("sourc: %s\n", src);
	printf("destin: %s\n", dest);	
	return (dest);

}
