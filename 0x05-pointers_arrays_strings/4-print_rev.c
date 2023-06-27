#include "main.h"
#include<stdio.h>
/**
 * print_rev - printstring in reverse
 *@str: argument
 * Return: nothing
 */
void print_rev(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (len != 0)
	{
		printf("%c", str[len]);
		len--;
	}
	printf("\n");
}
