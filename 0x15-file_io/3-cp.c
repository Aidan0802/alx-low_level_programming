#include "main.h"

/**
 * main - Copies content from one file to another
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, size;
	char buf[MAX_BYTES];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (access(argv[1], 0) != 0 || !(open(argv[1], O_RDONLY)))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else
		f_from = open(argv[1], O_RDONLY);
	if (access(argv[2], 0) == 0)
		f_to = open(argv[2], O_TRUNC | O_WRONLY);
	else
		f_to = open(argv[2], O_WRONLY | O_CREAT, 0660);
	if (f_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((size = read(f_from, buf, MAX_BYTES)) > 0)
		write(f_to, buf, size);

	if (f_from >= 0 && f_to >= 0)
	{
		close(f_from);
		close(f_to);
	}
	else
		exit(100);

	return (0);
}
