#include "main.h"

/**
 * puts2 - prints every other char of a string
 *
 * @str: string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, l;
	int len = 0;

	for (l = 0; str[l]; l++)
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
