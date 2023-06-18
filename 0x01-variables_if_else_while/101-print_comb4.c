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
		a += cA;

		for (a; a < 58; a++)
		{
			b = 50;
			b += cB;

			for (b; b < 58; b++)
			{
				if (a != b && a < b)
				{
					putchar(c);
					putchar(a);
					putchar(b);
				if (c == '7' && a == '8' && b == '9')
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
