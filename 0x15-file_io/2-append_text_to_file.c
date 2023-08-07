#include "main.h"
/**
 * append_text_to_file -  append text
 * @filename: where to app
 * @text_content: what to app
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t len = strlen(text_content);
ssize_t bytes_W;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
bytes_W = write(file, text_content, len);
if (bytes_W == -1 || bytes_W != len)
{
return (-1);
}
close(file);
return (1);
}
