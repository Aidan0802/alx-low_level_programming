#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: prints half of the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, a;
	int count = 0;

	for (i = 0; str[i]; i++)
	{
		count++;
	}

	for (a = count / 2; a < count; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
