#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "elf.h"

void display_error(const char *message)
{
fprintf(stderr, "Error : %s\n", message);
exit(98);
}

int open_file(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
display_error("Failed  to open the file");
}
return (fd);
}

void read_elf_header(int fd, Elf64_Ehdr *header)
{
if (read(fd, header, sizeof(*header)) != sizeof(*header))
{
close(fd);
display_error("Failed to read ELF header"); 
}
}

void validate_elf_file(Elf64_Ehdr *header)
{
if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
{
display_error("not an ELF file");
}
}

void display_elf_magic(Elf64_Ehdr *header)
{
int i;
printf("magic");
for(i = 0 ; i < EI_NIDENT ; i++)
{
printf("%02x ",header->e_ident[i]);
}
printf("\n");
}

void display_elf_class(Elf64_Ehdr *header)
{
printf("classe: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("invalid\n"); 
}
}

void display_elf_data(Elf64_Ehdr *header)
{
printf("Data: ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, littlre-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("invalid\n");
break; 
}
}

void display_elf_version(Elf64_Ehdr *header)
{
printf("Version: %d\n", header->e_ident[EI_VERSION]);
}

void display_elf_osabi(Elf64_Ehdr *header)
{
printf("OS/ABI: ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX System V\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
default:
printf("Other\n");
break;
}
}

void display_elf_abi_version(Elf64_Ehdr *header)
{
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
}

void display_elf_type(Elf64_Ehdr *header)
{
printf("Type: ");
switch (header->e_type)
{
case ET_NONE:
printf("None\n");
break;
case ET_EXEC:
printf("Executable\n");
break;
case ET_DYN:
printf("Shared object\n");
break;
case ET_REL:
printf("Relocatable\n");
break;
default:
printf("Unknown\n");
break;
}
}

void display_entry_point(Elf64_Ehdr *header)
{
printf("Entry point address: %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2) {
display_error("Usage: elf_header elf_filename");
}
    
const char *filename = argv[1];
int fd = open_file(filename);
Elf64_Ehdr header;

read_elf_header(fd, &header);
validate_elf_file(&header);
display_elf_magic(&header);
display_elf_class(&header);
display_elf_data(&header);
display_elf_version(&header);
display_elf_osabi(&header);
display_elf_abi_version(&header);
display_elf_type(&header);
display_entry_point(&header);
close(fd);
return 0;
}
