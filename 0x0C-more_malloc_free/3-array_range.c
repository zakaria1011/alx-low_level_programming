#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * array_range - allocat array
 * @min: min value
 * @max: max value
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
int i;
int totalsize = max - min + 1;
int *result;

if (min > max)
{
return (NULL);
}
result = malloc(totalsize * sizeof(int));
if (result == NULL)
{
return (NULL);
}
for (i = 0 ; i < totalsize ; i++)
{
result[i] = min;
min++;
}
return (result);
}
