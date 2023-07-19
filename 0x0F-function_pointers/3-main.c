#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - calcutes two inputs
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(strcmp(argv[2], "+")) || !(strcmp(argv[2], "-")) ||
		!(strcmp(argv[2], "*")) || !(strcmp(argv[2], "/")) || !(strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 && (!(strcmp(argv[2], "/")) || !(strcmp(argv[2], "%"))))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator)(num1, num2);
	printf("%i\n", calc);

	return (0);
}
