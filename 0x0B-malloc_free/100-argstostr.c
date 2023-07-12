#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates program arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns pointer to new string
 * otherwise NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, x = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	str = malloc(l + 1 * (sizeof(char)));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[x] = av[i][j];
			x++;
		}
		if (str[x] == '\0')
			str[x++] = '\n';
	}

	return (str);

}
