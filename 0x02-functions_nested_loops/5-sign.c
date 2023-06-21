#include "main.h"

/**
 * _prints_sign - checks n and prints sign
 *
 * @c: - if n > 0 then print +, is 0 print 0
 * if < 0 print -
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int _print_sign(int n)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
