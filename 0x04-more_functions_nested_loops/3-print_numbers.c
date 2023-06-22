#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number from 0 to 9
 * Return - nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		purchar(i);
	}
	putchar('\n');
}
