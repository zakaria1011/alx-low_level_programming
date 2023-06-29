#include "main.h"
/**
 * strncat - addup twowords but n bit
 *@dest: first argument
 *@src: second argument
 *@n: number of bit
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
j = 0;
while(dest[i] != '\0')
{
    i++;
    }
while(j < n)
{
    dest[i]=src[j];
    j++;
    i++
}
return (dest);
}