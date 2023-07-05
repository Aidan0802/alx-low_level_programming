#include "main.h"

/**
 * _sqrt_recursion - returns natural root of a number
 *
 * @n: input integer
 *
 * Return: the natural number, otherwise,
 * returns -1 if n does not have a natural number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (sqrt_cal(n, 0));

}

/**
 * sqrt_cal - calculates the square root
 *
 * @n: i
 * @i: increments integer
 *
 * Return: returns calculated square root
 */

int sqrt_cal(int n, int i)
{
	if (i % (n / i) == 0)
		if (n * (n / i) == n)
			return (i);
	return (sqrt_cal(n, i + 1));
}
