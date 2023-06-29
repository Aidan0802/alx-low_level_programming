#include "main.h"

/**
 * leet - encodes a string
 *
 * @c: string input
 *
 * Return: return encoded string
 */

char *leet(char *c)
{
	int i, a;
	char let[5] = { 'a', 'e', 'o', 't', 'l'};
	char num[5] = { '4', '3', '0', '7', '1'};
	char *encode = c;

	for (i = 0; c[i]; i++)
	{
		for (a = 0; a < 5; a++)
		{
			if (c[i] == let[a] || c[i] == let[a] - 32)
				encode[i] = num[a];
		}
	}
	return (encode);
}
