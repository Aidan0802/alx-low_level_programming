#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c, d;
int brk = 0;

for (a = 48; a < 58; a++)
{
	for (b = 48; b < 58; b++)
	{
		for (c = 48; c < 58; c++)
		{
			if (brk == 1)
			{
				break;
			}
			for (d = 48; d < 58; d++)
			{
				int i = (a * 10) + c;
				int x = (b * 10) + d;

				if (b < d)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						brk = 1;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
