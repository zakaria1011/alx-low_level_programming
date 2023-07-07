#include "main.h"
/**
 * _memset - fills memory
 * @s: first arg
 * @b: second arg
 * @n : third arg
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n > 0)
{
*s = b;
s++;
n--;
}
return (p);
}
