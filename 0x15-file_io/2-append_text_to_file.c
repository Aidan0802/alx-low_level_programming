#include "main.h"

/**
 * append_text_to_file - Appends at end of a file
 *
 * @filename: Name of the file to append to.
 * @text_content: Content to append.
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f_input;

	if (!filename)
		return (-1);
	else if (access(filename, 0) != 0)
		return (-1);

	f_input = fopen(filename, "a");
	if (!f_input)
		return (-1);
	
	if (text_content != 0)
		fprintf(f_input, "%s", text_content);

	fclose(f_input);
	return (1);
}
