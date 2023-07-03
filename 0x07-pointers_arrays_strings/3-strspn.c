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
	unsigned int count = 0;
	int i, a;
	char c = ' ';

	for (i = 0; accept[i]; i++)
	{
		for (a = 0; s[a]; a++)
		{
			if (c == s[a])
				continue;
			else if (accept[i] == s[a])
			{
				count++;
				c = accept[i];
			}
		}
	}
	return (count + 1);
	/**
	 * adding one is the '\0' character
	 */
}
