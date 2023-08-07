#include "main.h"
/**
 * create_file -  creat a file
 * @filename:  file name
 * @text_content: text content
 * Return:  1 or -1
*/
int create_file(const char *filename, char *text_content)
{
FILE *file;
size_t bytes_W;
size_t len;

if (filename == NULL)
{
return (-1);
}
file = fopen(filename, "w");
if (file == NULL)
{
return (-1);
}
if (text_content != NULL)
{
len = strlen(text_content);
bytes_W = fwrite(text_content, sizeof(char), len, file);
if (bytes_W < len)
{
fclose(file);
return (-1);
}
}
fclose(file);
return (1);
}
