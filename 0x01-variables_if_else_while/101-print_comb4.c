#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (c = 48; c < 58; c++)
	{
		for (a = 49; a < 58; a++)
		{
			for (b = 50; b < 58; b++)
			{
				if ( a != b && a < b)
				{
					putchar(c);
					putchar(a);
					putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
