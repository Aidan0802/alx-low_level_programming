#include "main.h"

/**
 * print_last_digit - return the last digit of any number
 *
 * @n: a certian number
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int a = n % 10;
	_putchar(a);
	return (a);

}
