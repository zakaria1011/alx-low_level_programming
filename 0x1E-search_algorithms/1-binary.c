#include "search_algos.h"
/**
*binary_search - using binary to search in sorted list
*@array: array where we do the searching
*@size: the size of the array
*@value: the value we are looking for
*Return: return the index to the accurence
*/
int binary_search(int *array, size_t size, int value)
{
int left, right;
int i;
int mid;
left = 0;
right = size - 1;
while (left <= right)
{
printf("Searching in array: ");
for (i = left ; i <= right ; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");
mid = left + (right - left) / 2;
if (array[mid] < value)
{
left = mid + 1;
}
else if (array[mid] > value)
{
right = mid - 1;
}
else
return (mid);
}
return (-1);
}
