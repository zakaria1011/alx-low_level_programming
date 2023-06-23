#include "main.h"

/**
 * print_diagonal - printf diagonal
 *@n: number od slash
 * Return : nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	int i;

	int j;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('\\');
			_putchar('\n');
	for (j = 0 ; j <= i ; j++)
	{
		_putchar(' ');
	}
	}
	}
	_putchar('\n');
}
