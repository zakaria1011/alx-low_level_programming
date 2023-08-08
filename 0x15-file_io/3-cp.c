#include "main.h"
/**
 * error_exit - help message error
 * @code: code to exit
 * @message: message to show
*/
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
/**
 * main - main function
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0
*/
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from, fd_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read;

if (argc != 3)
{
error_exit(97, "Usage: cp file_from file_to");
}
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Can't read from file %s", file_from);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Can't write to %s", file_to);
}
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
if (write(fd_to, buffer, bytes_read) != bytes_read){
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(fd_from);
close(fd_to);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
close(fd_to);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return 0;
}
