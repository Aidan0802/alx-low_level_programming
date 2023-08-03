#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: input to print in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar(48 + (n & 1));
	}
}
