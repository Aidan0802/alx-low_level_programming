#include "main.h"

/**
 * main - Print the alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 11)
	{
		int a = 97;
		while(a < 123)
		{
			_putchar(a);
			a++;
		}
		times++;
		_putchar('\n');
	}
}
