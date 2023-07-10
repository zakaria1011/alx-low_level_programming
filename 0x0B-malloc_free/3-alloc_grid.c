#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * alloc_grid - fonction who allocat a grid
 * @width: coloms
 * @hight: lines
 * Return: pointer
 */
int **alloc_grid(int width, int hight)
{
int i, j;
int **matrix;
if (width <= 0)
{
return (NULL);
}
if (hight <= 0)
{
return (NULL);
}
matrix = (int **)malloc(hight * sizeof(int *));
if (matrix == NULL)
{
return (NULL);
}
for (i = 0 ; i < hight ; i++)
{
matrix[i] = (int *)malloc(width * sizeof(int));
if (matrix[i] == NULL)
{
for (i = 0 ; i < hight ; i++)
{
free(matrix[i]);
}
free(matrix);
return (NULL);
}

}
for (i = 0 ; i < hight ; i++)
{
for (j = 0 ; j < width ; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
