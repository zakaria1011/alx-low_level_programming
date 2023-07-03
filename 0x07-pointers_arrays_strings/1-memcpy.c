#include "main.h"
/**
 * _memcpy - copy from to
 * @dest: first var
 * @src: source
 * @n: number of bit
 * Return: return dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

i = 0;
while (n > i)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
