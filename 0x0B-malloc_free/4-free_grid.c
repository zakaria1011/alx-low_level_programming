#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid - free allocation
 * @grid: matrix
 * @height:lines in matrix
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i < height ; i++)
{
free(matrix[i]);
}
free(matrix);
}
