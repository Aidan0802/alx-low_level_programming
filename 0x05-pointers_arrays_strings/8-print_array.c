#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 *
 * @a: array
 * @n: lenght of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
		if (n != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
