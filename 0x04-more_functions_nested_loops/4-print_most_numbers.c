#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print all num exept 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 4 && i == 2)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
