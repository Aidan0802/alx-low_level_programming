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
	FILE *fp;
	char c;
	size_t i = 0;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	while ((c = fgetc(fp)) != EOF)
	{
		if (i == letters)
			break;
		_putchar(c);
		i++;
	}
	fclose(fp);

	return (i);
}
