#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
