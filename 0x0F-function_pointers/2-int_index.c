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
if (size <= 0)
return (-1);
unsigned int i = 0;
while (!cmp(array[i]))
{
i++;
}
return (i);
if (i == size)
return (-1);
}
