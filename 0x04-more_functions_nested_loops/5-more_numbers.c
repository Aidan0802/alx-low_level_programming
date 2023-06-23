#include "main.h"

/**
 * more_numbers - prints 10 rows
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int x;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (x = 48; x <= 49; x++)
		{
			for (j = 49; j < 58; j++)
			{
				if (x == 49)
					_putchar(x);
				
				_putchar(j);
					
				if (x >= 49 && j >= 52)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}	

}
