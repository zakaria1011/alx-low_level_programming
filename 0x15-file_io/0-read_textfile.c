#include "main.h"
/**
 * read_textfile - fonction read from a file
 * @filename: name of the file
 * @letters: number of letters
 * Return: size of read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
ssize_t bytes_R, bytes_W;
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = (char *)malloc(letters + 1);
if (buffer == NULL)
{
close(file);
return (0);
}
bytes_R = read(file, buffer, letters);
if (bytes_R == -1)
{
free(buffer);
close(file);
return (0);
}
bytes_W = write(STDOUT_FILENO, buffer, bytes_R);
if (bytes_R != bytes_W || bytes_R == -1)
{
free(buffer);
close(file);
return (0);
}
free(buffer);
close(file);
return (bytes_W);
}
