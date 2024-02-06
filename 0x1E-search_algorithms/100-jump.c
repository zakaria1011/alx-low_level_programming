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
int m;
int step = 0;
int prev;
int i;
m = sqrt(size);
if (array == NULL)
return (-1);
if (size == 1)
{
    if (array[0] == value)
    {
        printf("Value checked array[0] = %d\n", value);
        return (0);
    }
    else
    return (-1);
}
while (array[step] < value && step < (int)size)
{
printf("Value checked array[%d] = %d\n", step, array[step]);
prev = step;
step = step + m;
}
printf("Value found between indexes [%d] and [%d]\n", prev, step);
for (i = prev ; i <= step && i < (int)size ; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
