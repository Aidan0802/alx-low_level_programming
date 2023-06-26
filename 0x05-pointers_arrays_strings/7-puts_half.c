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
	int i, a, half;
	int count = 0;

	for (i = 0; str[i]; i++)
	{
		count++;
	}

	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count / 2) + 1;

	for (a = half; a < count; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
