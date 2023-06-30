#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: number of celul
 * return : nothing
 */
void reverse_array(int *a, int n)
{
	int star;
	int end;
	int temp;

	star = 0;
	end = n - 1;
	while (star < end)
	{
		temp = a[star];
		a[star] = a[end];
		a[end] = temp;
		star++;
		end++;
	}
}
