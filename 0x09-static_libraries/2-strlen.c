#include "main.h"

/**
 * _strlen - conting lenght of a string
 *@s: the argument
 * Return: the lenght
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
