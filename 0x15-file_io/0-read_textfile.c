#include "main.h"

/**
 * read_textfile - Reads text and prints to standart output
 *
 * @filename: File to be read
 * @letters: Number of letter to read and print
 * Return: Number of letters that was read and printed
 * 0 if it cannot be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	size_t i = 0;
	char *buf = "";

	if(!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	while ((size = read(fd, buf, 1)) > 0)
	{
		if (i == letters)
			break;
		write(STDOUT_FILENO, buf, size), i++;
	}

	close(fd);
	free(buf);
	return (i);
}
