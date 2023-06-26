#include<stdio.h>
/**
 * swap_int - swaping tw numbers
 *@a: first argment
 *@b: second argument
 *Return: nothing
 */
void swap_int (int *a, int *b)
{
	int *p;
	*p=0;
	*p = *a;
	*a = *b;
	*b = *p;
}
