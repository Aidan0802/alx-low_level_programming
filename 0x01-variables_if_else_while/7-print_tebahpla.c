#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 123;

	while (a != 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
