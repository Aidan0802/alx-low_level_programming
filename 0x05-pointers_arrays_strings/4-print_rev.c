#include "main.h"

/**
 * print_rev - prints a string in rev
 *
 * @s: string input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
