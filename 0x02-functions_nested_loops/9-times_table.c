#include "main.h"
#include <stdio.h>

/**
 * times_table - increases the number and uses every
 *
 * @n: a certian number
 *
 * Return: the last digit of n
 */

void times_table(void)
{
	int i = 0;

	for ( i = 0; i < 10; i++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%i ", b * i);
		}
		putchar('\n');
	}
}
