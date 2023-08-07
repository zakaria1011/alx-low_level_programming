#include "main.h"
/**
 * print_error_and_exit - printf error
 * @code: code to exit
 * @message: error message
*/

void print_error_and_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "Error: %s\n", message);
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
ssize_t bytes_R;
char buffer[1024];
if (argc != 3)
{
print_error_and_exit(97, "Usage: cp file_from file_to\n");
}
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error_and_exit(98, strerror(errno));
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
print_error_and_exit(99, strerror(errno));
}
while ((bytes_R = read(fd_from, buffer, sizeof(buffer))) > 0)
{
if (write(fd_to, buffer, bytes_R) == -1)
{
print_error_and_exit(99, strerror(errno));
}
}
if (bytes_R == -1)
{
print_error_and_exit(98, strerror(errno));
}
if (close(fd_from) == -1)
{
print_error_and_exit(100, strerror(errno));
}
if (close(fd_to) == -1)
{
print_error_and_exit(100, strerror(errno));
}
return (0);
}
