#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @c: string input
 *
 * Return: return uppercase string
 */

char *string_toupper(char *c)
{
	int i, a;
	char *upper = c;

	for (i = 0; c[i]; i++)
	{
		for (a = 97; a < 123; a++)
		{
			if (c[i] == a)
				upper[i] = c[i] - 32;
			else
				upper[i] = c[i];
		}
	}
	return (upper);
}
