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
while (n > 0)
{
*dest = *src;
src++;
dest++;
}
return (dest);
}
