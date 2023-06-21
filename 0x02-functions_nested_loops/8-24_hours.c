#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	for (h1 = 48; h1 < 51; h1++)
	{
		for (h2 = 48; h2 < 52; h2++)
		{
			for (m1 = 48; m1 < 54; m1++)
			{
				for (m2	= 48; m2 < 58; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}

}
