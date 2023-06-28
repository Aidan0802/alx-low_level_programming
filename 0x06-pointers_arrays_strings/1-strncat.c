#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: returns a pointer to resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, i, len = 0;

	for (a = 0; dest[a]; a++)
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		dest[len + i] += src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);

}
