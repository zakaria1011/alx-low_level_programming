#include "main.h"
 /**
  * _strncpy - copie a string
  *@dest: first argumen
  *@src: second argumant
  *@n: number to copy
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int  n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
