#include "main.h"
/**
 * _strpbrk - return similar char
 * @s: string
 * @accept: pool to match with
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
char *p = NULL;
int i;
while (*s != '\0')
{
while (*accept = '\0')
{
if (*s == *accept)
{
*(p + i) = *s;
i++;
break;
}
accept++;
}
s++;
}
if (*p == NULL)
{
return (0);
}
else
{
return (p);
}
}
