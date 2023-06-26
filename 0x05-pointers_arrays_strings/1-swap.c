#include "main.h"

/**
 * swap_int - swaps to variable values
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *t1 = *a;
	int *t2 = *b;

	*a = t2;
	*b = t1;
}
