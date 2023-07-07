#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argv: argument vectors
 * @argc: argument count
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{

	char *n1 = argv[1];
	char *n2 = argv[2];

	int i = 0, x = 0, num1[1] = {0}, num2[1] = {0};
	int sign = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	if (n1[1] == '-' || n2[1] == '-')
		sign *= -1;

	while (n1[i] != '\0')
	{
		num1[i] = num1[i] * 10 + (n1[i] - 48);
		i++;
	}

	while (n2[x] != '\0')
	{
		num2[x] = num2[x] * 10 + (n2[x] - 48);
		x++;
	}
	printf("%i\n", num1[0] * num2[0]);

	return (0);

}
