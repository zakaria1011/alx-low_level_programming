#include "search_algos.h"
/**
*linear_search - function serch linear
*@array: array to search in
*@size: size of the array
*@value: the value that we are looking for
*Return: -1 or index to the value
*/

int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);

for (i = 0 ; i < (int)size ; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
