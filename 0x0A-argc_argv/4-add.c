#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success) returns 1
 * if there is an error
 */

int _isdigit(char *s);

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


/**
 * _isdigit - checks if c is a digit
 *
 * @s: string
 *
 * Return: 0 if its an digit, 1 if otherwise
 */

int _isdigit(char* s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}
