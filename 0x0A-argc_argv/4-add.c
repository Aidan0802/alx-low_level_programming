#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success) returns 1
 * if there is an error
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		int i, res = 0;
		
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (0);
			}
		}

		for (i = 1; i < argc; i++)
		{
			res += atoi(argv[i]);
		}

		printf("%d\n", res);
	}

	return (0);
}
