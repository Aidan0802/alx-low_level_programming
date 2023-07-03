#include "main.h"
#include <stddef.h>

/**
 * _strstr - located a substring
 *
 * @haystack: source
 * @needle: string to locate
 *
 * Return: returns pointer to the beginning of the
 * location substring otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; needle[i]; i++)
	{
		for (a = 0; haystack[a]; a++)
		{
			if (needle[i] == haystack[a])
				return (haystack + a);
		}
	}
	return (NULL);
}
