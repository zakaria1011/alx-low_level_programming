#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 *
 * Return:  nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;      /* Sum of the main diagonal */
	int sum_secondary = 0; /* Sum of the secondary diagonal */

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d , %d\n", sum_main, sum_secondary);
}
