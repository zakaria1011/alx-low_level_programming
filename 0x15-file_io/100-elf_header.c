#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <elf.h>

#define ELF_HEADER_SIZE sizeof(Elf64_Ehdr)

void print_elf_magic(const unsigned char *magic) {
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_elf_class(unsigned char elf_class) {
    printf("Class: %s\n", (elf_class == ELFCLASS32) ? "ELF32" : "ELF64");
}

void print_elf_data(unsigned char elf_data) {
    printf("Data: %s\n", (elf_data == ELFDATA2LSB) ? "Little Endian" : "Big Endian");
}

void print_elf_header_info(const Elf64_Ehdr *header) {
    print_elf_magic(header->e_ident);
    print_elf_class(header->e_ident[EI_CLASS]);
    print_elf_data(header->e_ident[EI_DATA]);

    printf("Version: %u\n", header->e_version);
    printf("OS/ABI: %u\n", header->e_ident[EI_OSABI]);
    printf("ABI Version: %u\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: %u\n", header->e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    struct stat file_stat;
    if (fstat(fd, &file_stat) == -1) {
        perror("Error getting file size");
        close(fd);
        return 98;
    }

    if (file_stat.st_size < ELF_HEADER_SIZE) {
        fprintf(stderr, "Error: File size too small to contain ELF header\n");
        close(fd);
        return 98;
    }

    void *mapped_file = mmap(NULL, file_stat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (mapped_file == MAP_FAILED) {
        perror("Error mapping file");
        close(fd);
        return 98;
    }

    const Elf64_Ehdr *header = (const Elf64_Ehdr *)mapped_file;

    if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        munmap(mapped_file, file_stat.st_size);
        close(fd);
        return 98;
    }

    print_elf_header_info(header);

    munmap(mapped_file, file_stat.st_size);
    close(fd);

    return 0;
}
