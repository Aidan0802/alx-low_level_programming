#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	
	if (n < 0)
	{

		while (n < 0)
		{
			_putchar('_');
			n++;
		}
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;

		}
	}
}
