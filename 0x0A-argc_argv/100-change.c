#include <stdio.h>

/**
 * main - prints minimal number of
 * coins to make change
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1] < 1))
	{
		printf("0\n");
		return (0);
	}
	else
	{

