#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		int a = 97;

		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		times++;
		_putchar('\n');
	}
}
