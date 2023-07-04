#include "main.h"
/**
 * _strchr - cherche for c
 * @s: string to search in
 * @c: caractere to search
 * Return: poiter to string ot NULL
 */
char *_strchr(char *s, char c)
{
if (s == NULL)
{
return (NULL);
}
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
