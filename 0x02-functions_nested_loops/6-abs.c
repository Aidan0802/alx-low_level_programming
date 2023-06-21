#include "main.h"

/**
 * _abs - prints the abs number
 *
 * n: a number to get absolute value
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * 1;
		_putchar(n);
		return (0);
	}

	_putchar(n);
	return (0);
}
