#include "main.h"

/**
 * _isupper - checks if the char is an upper
 *
 * @c: intakes a char
 *
 * Return: 1 if its an upper, 0 if otherwise
 */
int _isupper(int c)
{
	int a = 65;

	while (a < 91)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
