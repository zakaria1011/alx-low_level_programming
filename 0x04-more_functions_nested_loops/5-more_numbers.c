#include "main.h"

/**
 * more_numbers - print from 0 to 14  ten times
 * Return: nothing
 */

void more_numbers(void);
{
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			_putchar(i + 'O');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
