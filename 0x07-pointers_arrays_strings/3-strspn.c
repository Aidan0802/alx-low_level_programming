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
	unsigned int count = 0, i;

	for (i = 0; accept[i]; i++)
	{
		if (s[i] == accept[count])
			count++;
	}
	return (count);
}
