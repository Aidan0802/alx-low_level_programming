#include "main.h"

/**
 * _strcmp - compares to strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal
 * greater than 0 if s1 compares greater s2
 * less than 0 if s1 compares s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, count = 0;

	if (*s1 == *s2)
		return (0);
	else if (s1[0] > s2[0])
	{

		for (i = s1[0]; i > s2[0]; i--)
		{
			count++;
		}
		return (count);
	}
	else
	{
		for (i = s1[0]; i < s2[0]; i++)
		{
			count--;
		}
		return (count);
	}
}
