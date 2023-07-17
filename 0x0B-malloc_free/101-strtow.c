#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: pointer to array of words
 * returns NULL if string is NULL or ""
 * returns NULL if function fails
 */

char **strtow(char *str)
{
	int i, j = 0, x = 0, k = 0, len = 0, size = 0;
	char **outstr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			size++;
	}

	outstr = malloc(len * sizeof(char));
	if (outstr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		outstr[i] = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		for (; j < len; j++)
		{
			if (str[j] != ' ')
			{
				outstr[k][x] = str[j];
				x++;
				if (str[j + 1] == ' ' && str[j] != ' ')
				{
					outstr[k][x] = '\0';
					j++;
					k++;
					x = 0;
					break;
				}
			}
		}
	}
	return (outstr);
}
