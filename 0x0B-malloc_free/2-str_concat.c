#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns pointer to new memory of concatenated strings
 * returns NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, x = 0;
	int len1 = 0, len2 = 0, size = 0;
	char *buffer = NULL;
		
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			len1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			len2++;
	}
	
	if (len1 == 0)
		size = len2;
	else if (len2 == 0)
		size = len1;
	else
		size = len1 + len2;

	buffer = malloc(size + 1);

	if (s1 == NULL && s2 == NULL)
	{
		buffer[0] = ' ';
		buffer[1] = '\0';
		return (buffer);
	}

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		buffer[i] = s1[i];

	for (i = len1; i < size; i++)
	{
		if (len1 == 0)
			buffer[i] = s2[i];
		else if (s2 == NULL)
			break;
		else
		{
			buffer[i] += s2[x];
			x++;
		}
	}

	return (buffer);
}
