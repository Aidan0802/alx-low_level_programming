#include "main.h"

/**
 * print_triangle - prints a # triangle
 *
 * @size: angle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 1; x < size - i; x++)
		{
			_putchar(' ');
		}

		for (x--; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
