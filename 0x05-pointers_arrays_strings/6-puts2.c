#include "main.h"
#include<stdio.h>
/**
 * puts2 - put add caracter
 *@str: argument
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int len;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
