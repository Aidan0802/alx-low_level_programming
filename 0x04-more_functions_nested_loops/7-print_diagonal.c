#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: length of the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int row, columns, space;

	for (row = 0; row <= n; row++)
	{
		for (columns = 0; columns < rows; columns++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
