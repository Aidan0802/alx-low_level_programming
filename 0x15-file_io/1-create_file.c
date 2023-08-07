#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: File to create
 * @text_content: Content that's stored in
 * the file
 *
 * Return: 1 (Success). -1 (Failure) Can
 * not be created.
 */

int create_file(const char *filename, char *text_content)
{
	int f_input, len;

	if (!filename)
		return (-1);

	f_input = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);
	if (!f_input)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;

	write(f_input, text_content, len);
	write(f_input, "\n", 1);
	return (1);
}
