#include "main.h"

/**
 * _pow_recursion - calculates the base raised power
 *
 * @x: base integer
 * @y: power interger
 *
 * Return: -1 if y is 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return x * 1;
	else
		return (x * _pow_recursion(x, y - 1));
}
