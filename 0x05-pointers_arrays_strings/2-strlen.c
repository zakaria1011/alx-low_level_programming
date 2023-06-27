#include "main.h"

/**
 * str_len - conting lenght of a string
 *@s: the argument
 * Return: the lenght
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
