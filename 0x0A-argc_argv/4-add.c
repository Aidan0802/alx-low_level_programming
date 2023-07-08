#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
			if (_isdigit(argv[i]) != 0)
			{
				printf("Error\n");
				return (0);
			}

			res += atoi(argv[i]);
		}

		printf("%d\n", res);
	}

	return (0);
}
