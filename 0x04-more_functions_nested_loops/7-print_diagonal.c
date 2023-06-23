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
	int row, columns;

	for (row = 0; row <= n; row++)
	{
		for (columns = 0; columns < row; columns++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
