#include "main.h"

/**
 * main - Displays info contained in ELF header
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	int i;
	struct h_info info_p;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		return (1);
	}

	fp = fopen(argv[1], "rb");
	if (!fp)
	{
		perror("File cannot open\n");
		exit(98);
	}

	fread(&info_p, sizeof(info_p), 1, fp);
	fclose(fp);

	printf("Magic ");
	for (i = 0; i < 16; i++)
		printf("%02X ", info_p.ident[i]);
	putchar('\n');
	
	return (0);
}
