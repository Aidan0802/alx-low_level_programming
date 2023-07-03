#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: input lenght
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; a[x][8]; x++)
		{
			_putchar(a[i][x]);
		}
	}

}
