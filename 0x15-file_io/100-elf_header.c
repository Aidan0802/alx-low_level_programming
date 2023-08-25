#include "main.h"

/**
 * main - Read elf header
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always (Succes)
 */

int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Unable to open the file");
	}

	display_elf(fd);

	close(fd);

	return (0);
}
/**
 * display_elf - Display elf header
 * @fd: File discription
 * Return: void
 */
void display_elf(int fd)
{
	char elf_header[ELF_HEADER_SIZE];
	int i;
	uint8_t abi_version;
	uint64_t entry_point;

	const char *class_names[] = {"None", "ELF32", "ELF64"};
	const char *data_names[] = {"None", "2's complement, little endian",
		"2's complement, big endian"};
	const char *os_abi_names[] = {
	"UNIX - System V", "UNIX - SHP-UX", "UNIX - SNetBSD", "UNIX - SLinux",
	"UNIX - SGNU Hurd", "UNIX - SSolaris", "UNIX - SAIX", "UNIX - SIRIX",
	"UNIX - SFreeBSD", "UNIX - STru64", "UNIX - SNovell Modesto",
	"UNIX - SOpenBSD", "UNIX - SOpenVMS", "UNIX - SNonStop Kernel",
	"UNIX - SAROS", "UNIX - SFenix OS", "UNIX - SCloudABI",
	};
	const char *type_names[] = {
	"None", "REL (Relocatable)", "EXEC (Executable)", "DYN (Shared object)",
	"CORE (Core)",
	};

	read_header(fd, elf_header);

	abi_version = (uint8_t)elf_header[ABI_VERSION_OFFSET];
	entry_point = *(uint64_t *)(elf_header + ENTRY_POINT_OFFSET);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; ++i)
	{
		printf("%02x ", (unsigned char)elf_header[i]);
	}
	printf("\n");
	printf("  Class: %*s\n", 33, class_names[(int)elf_header[CLASS_OFFSET]]);
	printf("  Data: %*s\n", 58, data_names[(int)elf_header[DATA_OFFSET]]);
	printf("  Version: %*d (current)\n", 27, (int)elf_header[VERSION_OFFSET]);
	printf("  OS/ABI: %*s\n", 42, os_abi_names[(int)elf_header[OS_ABI_OFFSET]]);
	printf("  ABI Version: %*d\n", 23, (int)abi_version);
	printf("  Type: %*s\n", 48, type_names[*(uint16_t *)(elf_header + TY_OFFS)]);
	printf("  Entry point address: %#*lx\n", 20, (unsigned long int)entry_point);
}
/**
 * read_elf - Read elf header
 * @fd: File descriptor
 * @elf_header: Elf header
 * Return: void
 */

void read_header(int fd, char elf_header[ELF_HEADER_SIZE])
{
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		print_error("Unable to seek to file start");
	return;
	}

	if (read(fd, elf_header, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
	{
		print_error("Unable to read ELF header");
	}
}
/**
 * print_error - Prints error message
 * @message: Message to be printed
 * Return: void
 */

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(ERROR_NOT_ELF);
}
