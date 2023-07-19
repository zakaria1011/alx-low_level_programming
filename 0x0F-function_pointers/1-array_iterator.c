#include "function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - function that display an array
 * @array: array to display
 * @size: size of an array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
