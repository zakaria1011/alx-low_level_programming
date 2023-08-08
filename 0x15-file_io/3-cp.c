#include "main.h"
/**
 * no_read - error no read
 * @file: name of the file
*/
void no_read(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
/**
 * no_close - error close
 * @fd: file
*/
void no_close(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
/**
 * main -  main fonction
 * @argc: number of arg
 * @argv: args
 * Return: 0
*/
int main(int argc, char *argv[])
{
int source_fd, destination_fd, bytes_R, close_source, close_destination;
char buffer[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
source_fd = open(argv[1], O_RDONLY);
if (source_fd < 0)
{
no_read(argv[1]);
}
destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((bytes_R = read(source_fd, buffer, BUFSIZ)) > 0)
{
if (destination_fd < 0 || write(destination_fd, buffer, bytes_R) != bytes_R)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(source_fd);
exit(99);
}
}
if (bytes_R < 0)
{
no_read(argv[1]);
}
close_source = close(source_fd);
close_destination = close(destination_fd);
if (close_source < 0)
{
no_close(source_fd);
}
if (close_destination < 0)
{
no_close(destination_fd);
}
return (0);
}
