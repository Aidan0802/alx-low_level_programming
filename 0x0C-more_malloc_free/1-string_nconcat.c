#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 *
 * Return: pointer to newly allocated memory
 * containing s1 followed by n bytes of s2
 * NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1 + n; i++)
	{	
		if (i < (len1 + n))
			str[i] = s1[i];
		else
			str[i] = s2[i];
	}
	str[i] = '\0';

	return (str);
}
