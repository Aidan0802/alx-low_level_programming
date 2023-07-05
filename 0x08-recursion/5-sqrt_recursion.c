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
	if (n % 2 == 0)
	{
		return 0;

	}
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (-1);


}
