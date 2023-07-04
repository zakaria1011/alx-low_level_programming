#include "main.h"
/**
 * _strpbrk - return similar char
 * @s: string
 * @accept: pool to match with
 * Return: number of bit
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
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
return (p);
}
