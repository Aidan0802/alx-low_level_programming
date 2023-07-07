#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string
 * @accept: accept set of bytes
 *
 * Return: returns pointer ti the byte in s
 * that matches bytes in accept otherwise return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
