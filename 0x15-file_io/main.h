#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>

#define ELF_HEADER_SIZE 0x20
#define CLASS_OFFSET 0x04
#define DATA_OFFSET 0x05
#define VERSION_OFFSET 0x06
#define OS_ABI_OFFSET 0x07
#define ABI_VERSION_OFFSET 0x08
#define TY_OFFS 0x10
#define ENTRY_POINT_OFFSET 0x18
#define ERROR_NOT_ELF 98

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void display_elf(int);
void print_error(const char *);
void read_header(int, char elf_header[ELF_HEADER_SIZE]);

#endif
