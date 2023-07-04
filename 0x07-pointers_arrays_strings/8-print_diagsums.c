
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_main = 0;
int sum_secondary = 0;

for (i = 0; i < size; i++)
{
sum_main += a[i * (size + 1)];
}
for (i = 1; i <= size; i++)
{
sum_secondary += a[(size - 1) * i];
}
printf("%d , %d  \n", sum_main, sum_secondary);
}
