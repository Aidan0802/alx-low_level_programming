#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: string
 * @b: character
 * @n: unsigned integer
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
