#include "main.h"
/**
 * _strcat - add two word
 *@dest: first arg
 *@src: second arg
 * Return: returndest
 */
char *_strcat(char *dest,char *src)
{
	
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
		}
	while (src[len2] != '\0')
	{
		*(dest + len1) = *(src + len2);
		len2++;
		len1++;
		}
	*(dest + len1) = '\0';
	return (dest);
}