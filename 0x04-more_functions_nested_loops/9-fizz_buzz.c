#include <stdio.h>

/**
 * main - check for multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}

		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%i ", i);
	}
	putchar('\n');
	return (0);
}
