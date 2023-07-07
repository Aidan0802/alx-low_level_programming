#include <stdio.h>

/**
 * main - prints all arguments
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
