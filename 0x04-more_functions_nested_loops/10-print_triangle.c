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
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 2; j > size - i; j--)
		{
			_putchar(' ');
		}

		for (k = j--; k < size; k++)
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
