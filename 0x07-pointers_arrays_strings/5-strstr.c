#include "main.h"

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
	int i, a, x, j, match = 0;

	for (i = 0; needle[i]; i++)
	{
		for (a = 0; haystack[a]; a++)
		{
			if (haystack[a] == needle[i])
			{	
				j = a;
				x = i;
				while ( match == 0)
				{
					match = needle[j] - haystack[x];
					x++;
					i++;
				}
			}
		}
	}
	return ('\0');
}
