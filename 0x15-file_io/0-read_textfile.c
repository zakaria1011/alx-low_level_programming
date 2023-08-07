#include "main.h"
/**
 * read_textfile - fonction read from a file
 * @filename: name of the file
 * @letters: number of letters
 * Return: size of read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t bytes_R, bytes_W;
if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
buffer = (char *)malloc(letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0);
}
bytes_R = fread(buffer, sizeof(char), letters, file);
if (bytes_R <= 0)
{
free(buffer);
fclose(file);
return (0);
}
bytes_W = fwrite(buffer, sizeof(char), bytes_R, stdout);
if (bytes_R != bytes_W)
{
free(buffer);
fclose(file);
return (0);
}
free(buffer);
fclose(file);
return (bytes_W);
}
