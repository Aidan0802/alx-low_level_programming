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
	int cA = 0;
	int cB = 0;

	for (c = 48; c < 58;)
	{
		a = 49;
		a += cA
			;
		for (; a < 58; a++)
		{
			b = 50;
			b += cB;

			for ( ; b < 58; b++)
			{
				if (a == 56 && b == 57)
				{
					c++;
				}
				if (a != b && a < b)
				{
					putchar(c);
					putchar(a);
					putchar(b);
				if (c == 55 && a == 56 && b == 57)
				{
					break;
				}
					putchar(',');
					putchar(' ');
				}
			}
		}
		cA++;
		cB++;
	}
	return (0);
}
