#include "main.h"

/**
 * print_last_digit - return the last digit of any number
 *
 * @n: a certian number
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int a = -1 * (n % 10);

		_putchar(a + 48);
		return (a);
	}

	_putchar((n % 10) + 48);
	return (n % 10);

}
