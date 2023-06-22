#include "main.h"

/**
 * more_numbers - prints 10 rows
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 48;
	int x = 48;

	while (x < 50)
	{
		while (i < 58)
		{
			if (x >= 50 && i >= 54)
			{
				break;
			}
			if (x >= 49)
			{
				_putchar(x);
			}
			_putchar(i);
		}
		_putchar('\n');
	}

}
