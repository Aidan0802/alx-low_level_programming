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

	for (c = 48; c < 58;)
	{
		if (a == '8')
			a++;
		else
			a = 49;

		for (a; a < 58; a++)
		{
			if (b == '9')
				b++;
			else
				b = 50;

			for (b ; b < 58; b++)
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
	}
	return (0);
}
