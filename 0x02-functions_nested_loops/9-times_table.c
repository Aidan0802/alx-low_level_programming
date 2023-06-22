#include "main.h"
#include <stdio.h>

/**
 * times_table - increases the number and uses every
 *
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%i", b * i);
			if (b != 9)
				putchar(',');

			putchar(' ');

			if (b * i < 10)
				putchar(' ');
		}
		putchar('\n');
	}
}
