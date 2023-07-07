#include "main.h"

/**
 * _islower - Checks if char is alphabet
 *
 * @c: - is a lower or upper alphabet
 *
 * Return: 1 if it is lower, retun 0 if other
 */

int _isalpha(int c)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	for (a = 65; a < 91; a++)
        {
                if (c == a)
                {
                        return (1);
                }
        }


	return (0);
}
