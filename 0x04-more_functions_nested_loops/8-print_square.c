#include "main.h"

/**
 * print_square - prints a # square
 *
 * @size: square size
 *
 * Return: void
 */

void print_square(int size)
{
	int row;

	for (row = 0; row < size; row++)
	{
		int columns;
		for (columns = 0; columns < size; columns++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
