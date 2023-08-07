#include "main.h"
/**
 * append_text_to_file -  append text
 * @filename: where to app
 * @text_content: what to app
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
int test = -1;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (-1);
}
file = fopen(filename, "a");
if (file == NULL)
{
return (-1);
}
if (fputs(text_content, file) == EOF)
{
test = -1;
}
fclose(file);
return (test);
}
