#include "search_algos.h"
/**
*linear_search - function serch linear
*@array: array to search in
*@size: size of the array
*@value: the value that we are looking for
*Return: -1 or index to the value
*/

int linear_search(size_t *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);

for (i = 0 ; i < size ; i++)
{
printf("Value checked array[%zu] = [%zu]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
