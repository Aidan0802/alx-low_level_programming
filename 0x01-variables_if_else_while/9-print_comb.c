#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		putchar(',');
		a++;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
