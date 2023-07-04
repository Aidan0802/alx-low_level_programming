#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: returns pointer to first occurrence
 * of the character or NULL if its not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (c == s[i])
			return (s + i);
	}
	return ('\0');

}
