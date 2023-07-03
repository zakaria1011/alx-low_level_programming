#include "main.h"
/**
 * _strchr - cherche for c
 * @s: string to search in
 * @c: caractere to search
 * Return: poiter to string ot NULL
 */
char *_strchr(char *s, char c)
{
char *p = s;

while (*p != c)
{
p++;
}
if (*p != NULL)
{
return (p);
}
else
{
return (NULL);
}
}
