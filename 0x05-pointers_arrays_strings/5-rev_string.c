#include "main.h"

/**
 * rev_string - prints a string in rev
 *
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, l;
	char temp = s[0];
	int len = 0;

	for (l = 0; s[l]; l++)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
