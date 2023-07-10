#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - create and array
 * @size: size of the array
 * @c: char initialise
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
int i;
char *array;

if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
array[i] = c;
}
return (array);
}
