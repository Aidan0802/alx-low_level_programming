#include "main.h"

/**
 * print_most_numbers - prints 1 - 9 ends with new line
 * except 2 and 4
 *
 * Return: calculation
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n != 50 || n != 52)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
