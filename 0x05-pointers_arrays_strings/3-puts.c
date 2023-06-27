#include "main.h"
#include<stdio.h>
/**
 * _puts - print string
 *@str: argument
 *Return: nothing
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		printf("%c", str[len]);
	}
	printf("\n");
}
