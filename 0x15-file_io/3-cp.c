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
	int f_from, f_to, size, f_i, f_o, fd_val;
	char buf[MAX_BYTES];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(argv[1], 0) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_from = open(argv[1], O_RDONLY);
	if (access(argv[2], 0) == 0)
		f_to = open(argv[2], O_TRUNC | O_WRONLY);
	else
		f_to = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (size > 0)
	{
		size = read(f_from, buf, MAX_BYTES);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write(f_to, buf, size);
	}
	f_i = close(f_from), f_o = close(f_to);
	if (f_i != 0 || f_o != 0)
	{
		fd_val = (f_i != 0) ? f_from : f_to;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
		exit(100);
	} return (0);
}
