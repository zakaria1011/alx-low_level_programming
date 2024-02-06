#include "search_algos.h"
/**
*jump_search - jump search algorithm
*@array: array to search on
*@size: size of the array
*@value: value that we are looking for
*Return: -1 or index to the value
*/
int jump_search(int *array, size_t size, int value)
{
int step = sqrt(size);
int i;
int prev = 0;
int curr = step;
if (array == NULL)
return -1;
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
while (array[curr] < value && curr < (int)size)
{
printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
prev = curr;
curr += step;
if (curr >= (int)size)
break;
}
printf("Value found between indexes [%d] and [%d]\n", prev, curr);
for (i = prev; i <= curr && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
