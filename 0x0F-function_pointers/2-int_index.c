#include "function_pointers.h"
/**
 * int_index - return index of chosen num
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer function
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
