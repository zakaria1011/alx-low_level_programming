#include "main.h"
/**
 * _strspn - number of  bit in segment
 * @s: string
 * @accept: pool to match with
 * Return: number of bit
 */
unsigned int _strspn(char *s, char *accept)
{
int len_s = 0;
int len_ac = 0;
int i;
int j;

while (*s != '\0')
{
len_s++;
}
while (*accept != '\0')
{
len_ac++;
}
for (i = 0 ; i < len_s ; i++)
{
for (j = 0 ; j < len_ac ; j++)
{
if (*(s + i) == *(accept + j))
{
break;
}
}
if (*accept == '\0')
{
break;
}
}
return (i);
}
