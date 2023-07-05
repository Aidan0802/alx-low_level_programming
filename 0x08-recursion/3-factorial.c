#include "main.h"

/**
 * factorial - returns factorial given number number
 *
 * @n: integer input
 *
 * Return: if n is lower than 0, it returns -1
 * to indicate an error
 */

int factorial(int n)
{
	if (n > 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return n * factorial(n - 1);

}
