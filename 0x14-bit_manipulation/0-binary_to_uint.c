#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: binary number
 * Return: Converted number. 0 if there is 
 * charaters other than 0 or 1 or is b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i;
	unsigned int conv = 0, p = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
		{
			len--;
			continue;
		}
		else if (i == (len - 1) && b[i] == '1')
			conv += 1;
		else
		{
			p = power(len - 1);
			conv += p;
			len--;
		}
	}

	return (conv);
}

/**
 * power - calculates power of 2
 * @n: power input
 * Return: calculation
 */

unsigned int power(unsigned int n)
{
	unsigned int i, p = 1;

	for (i = 0; i < n; i++)
		p *= 2;
	return (p);
}
