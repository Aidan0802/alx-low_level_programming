#include <stdio.h>

/**
 * main - prints the name of program
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);

	return (0);

}
