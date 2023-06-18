#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	int a3;
	int a2;
	int a1;
	int c1 = 0;
	int c2 = 0;

	for (a3 = 48; a3 < 56;a3++)
	{
		a1 = 49;
		a1 += c1;
		
		for (; a1 < 58; a1++)
		{
			a2 = 50;
			a2 += c2;

			for (; a2 < 58; a2++)
			{
				if (a1 != a2 && a1 < a2 )
				{
					putchar(a3);
					putchar(a1);
					putchar(a2);
					if (a1 == '8' && a2 == '9' && a3 == '7')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
		c1++;
		c2++;
	}
	return (0);
}
