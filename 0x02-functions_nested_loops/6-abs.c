#include "main.h"
#include <stdio.h>
/**
 * _abs - the absolute number
 *
 * @n: checks if its less than zero
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= 1;
		puts(n);
		return (0);
	}
	puts(n);
	return (0);
}
