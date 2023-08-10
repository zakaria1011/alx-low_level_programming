#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include "elf.h"

void print_elf_header_info(Elf64_Ehdr *elf_header);
int main(int argc, char *argv[]);

/**
 * print_elf_header_info - Display ELF header information.
 * @elf_header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; ++i)
    {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    printf("Class: ");
    switch (elf_header->e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid class\n");
            break;
    }

    printf("Data: ");
    switch (elf_header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }

    printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (elf_header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX System V\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        // Add more cases as needed
        default:
            printf("Unknown OS/ABI\n");
            break;
    }

    printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (elf_header->e_type)
    {
        case ET_NONE:
            printf("None (No file type)\n");
            break;
        case ET_REL:
            printf("Relocatable\n");
            break;
        // Add more cases as needed
        default:
            printf("Unknown type\n");
            break;
    }

    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 on invalid usage, 98 on errors.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 98;
    }

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
    {
        perror("Error reading ELF header");
        close(fd);
        return 98;
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}
