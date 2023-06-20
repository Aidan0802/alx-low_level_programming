#include "main.h"

/**
 * print_alphabet - Printing the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
