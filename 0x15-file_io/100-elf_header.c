#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - Print an error message and exit with status 98.
 * @message: The error message to display.
 */
void print_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_magic - Print the ELF magic numbers.
 * @e_ident: A pointer to the ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i)
    {
        printf("%02x", e_ident[i]);
        if (i < EI_NIDENT - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

/**
 * print_class - Print the ELF class.
 * @e_ident: The ELF identification byte for class.
 */
void print_class(unsigned char e_ident)
{
    printf("  Class:                             ");
    switch (e_ident)
    {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32:   printf("ELF32\n"); break;
        case ELFCLASS64:   printf("ELF64\n"); break;
        default:           printf("<unknown: %x>\n", e_ident); break;
    }
}

// (Same style for other print functions)

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Cannot open file");
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        print_error("Error reading ELF header");
    }

    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        print_error("Error seeking to the beginning of the file");
    }

    unsigned char e_ident[EI_NIDENT];
    bytes_read = read(fd, e_ident, EI_NIDENT);
    if (bytes_read != EI_NIDENT)
    {
        print_error("Error reading ELF identification bytes");
    }

    if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
    {
        print_error("Not an ELF file");
    }

    printf("ELF Header:\n");
    print_magic(e_ident);
    print_class(e_ident[EI_CLASS]);

    // (Same style for calling other print functions)

    close(fd);
    return 0;
}
