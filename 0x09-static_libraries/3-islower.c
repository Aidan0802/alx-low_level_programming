#include "main.h"

/**
 * _islower - Checks if char is lower alphabet
 *
 * @c: - is a variable that will be compared with ascii
 *
 * Return: 1 if it is lower, retun 0 if other
 */

int _islower(int c)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}

	return (0);
}
