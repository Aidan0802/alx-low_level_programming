#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
