#include "main.h"

/**
 * print_sign - checks n and prints sign
 *
 * @n: if n > 0 then print +, is 0 print 0
 * if < 0 print -
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
