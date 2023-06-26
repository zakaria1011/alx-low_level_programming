#include "main.h"
/**
 * swap_int - swaping tw numbers
 *@a: first argment
 *@b: second argument
 *Return: nothing
 */
void swap_int (int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
