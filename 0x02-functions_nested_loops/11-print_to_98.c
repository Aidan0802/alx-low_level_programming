#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - counts down or up until 98
 *
 * @n: random integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
				break;
			}
			printf("%i, ",n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
				break;
			}
			printf("%i, ", n);
			n--;
		}
	}
}
