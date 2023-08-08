#include "main.h"
/**
 * handleError - hand error
 * @code: code exit
 * @message: message to display
 * @file_name: name file
 * @fd: file to close
*/
void handleError(int code, const char *message, const char *file_name, int fd)
{
dprintf(STDERR_FILENO, message, file_name);
if (fd != -1)
{
close(fd);
}
exit(code);
}
/**
 * main - main function
 * @argc: number of arg
 * @argv: array of arg
 * Return: null
*/
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
char buffer[BUFFER_SIZE];
ssize_t n_read, n_written;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
handleError(98, "Error: Can't read from file %s\n", file_from, -1);
}
int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
handleError(99, "Error: Can't write to %s\n", file_to, fd_from);
}
while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
n_written = write(fd_to, buffer, n_read);
if (n_written == -1 || n_written != n_read)
{
handleError(99, "Error: Can't write to %s\n", file_to, fd_from);
}
}
if (n_read == -1)
{
handleError(98, "Error: Can't read from file %s\n", file_from, fd_to);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
handleError(100, "Error: Can't close fd %d\n", "", -1);
}
return (0);
}
