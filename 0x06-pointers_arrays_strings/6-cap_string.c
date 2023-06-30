#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @c: string input
 *
 * Return: return capitalized string
 */

char *cap_string(char *c)
{
	int i, a;
	char *caps = c;
	char separ[13] = { '\n', ' ', '\t', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i]; i++)
	{
		if (c[0] - 26 < 65)
			c[0] = c[0] + 32;
		for (a = 0; a < 13; a++)
		{
			if (c[i] == separ[a])
			{
				if (c[i + 1] - 26 < 65)
					continue;
				else
					caps[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (caps);
}
