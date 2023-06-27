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
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len - 1 ; i >= 0 ; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
