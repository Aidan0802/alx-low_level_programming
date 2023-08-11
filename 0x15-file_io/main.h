#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_BYTES 1024

/**
 * struct elf_head - Structure of elf head
 * @ident: Array that holds identification number 
 * @type: Type of file
 * @version: The version of the file
 * @entry: The entry point address
 */ 

struct h_info
{
	uint8_t  ident[16];
	uint16_t type;
	uint32_t version;
	uint64_t entry;
};

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
