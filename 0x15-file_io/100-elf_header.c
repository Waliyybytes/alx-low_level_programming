#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <elf.h>
#include "display_info.h"

/**
 * elf_checker - display information in elf header files
 * @e_ident: bytes that interpretes the file
 * Return: Nothing
 */
void elf_checker(unsigned char *e_ident)
{
	int i;

	for (i = 1; i < 4; i++)
	{
		if (e_ident[1] != 'E' &&
		    e_ident[2] != 'L' &&
		    e_ident[3] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
			exit(100);
		}
	}
}
/**
 * main - display information in elf header files
 * @argc: arg count
 * @argv: arg char *
 * Return: 1 for success
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr *hdr;

	if (argc != 2)
		dprintf(2, "Usage: elf_header elf_filename\n"), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (!hdr)
	{
		close(fd);
		dprintf(2, "Invalid header type %s\n");
		exit(99);
	}
	if (read(fd, hdr, sizeof(Elf64_Ehdr)) ==  -1)
	{
		free(hdr);
		close(fd);
		dprintf(2, "Error: Invalid file\n", argv[1]);
		exit(99);
	}
	elf_checker(hdr->e_ident);
	printf("ELF Header:\n");
	print_magic(hdr->e_ident);
	print_class(hdr->e_ident);
	print_data(hdr->e_ident);
	print_version(hdr->e_ident);
	print_osabi(hdr->e_ident);
	print_abi(hdr->e_ident);
	print_type(hdr->e_type, hdr->e_ident);
	print_entry(hdr->e_entry, hdr->e_ident);
	free(hdr);
	close(fd);
	return (0);
}

