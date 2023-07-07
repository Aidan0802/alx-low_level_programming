#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: char thats inside of string
 *
 * Return: returns number of bytes in the s
 * which consist only of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, x;

	for (i = 0; accept[i]; i++)
	{
		for (x = 0; s[x]; x++)
		{
			if (s[x] == accept[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
