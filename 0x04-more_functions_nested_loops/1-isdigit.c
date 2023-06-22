#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: intakes an integer
 *
 * Return: 1 if its an digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int a = 48;

	while (a < 58)
	{
		if (c == a)
		{
			return (1);
		}
		a++
	}
	return (0);
}
