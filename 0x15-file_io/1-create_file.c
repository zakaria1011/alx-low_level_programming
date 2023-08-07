#include "main.h"
/**
 * create_file -  creat a file
 * @filename:  file name
 * @text_content: text content
 * Return:  1 or -1
*/
int create_file(const char *filename, char *text_content)
{
int file;
size_t bytes_W;
size_t len;

if (filename == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
len = strlen(text_content);
bytes_W = write(file, text_content, len);
if (bytes_W < len)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
