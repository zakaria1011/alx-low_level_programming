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
int len = 0;
int bytes_W;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len] != '\0')
{
len++;
}
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
bytes_W = write(file, text_content, len);
if (bytes_W == -1)
{
return (-1);
}
close(file);
return (1);
}
