#include "search_algos.h"
/**
*
*
*
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
        for (i = left ; i <= right ; i++)
        {
            printf("Searching in array:\t");
            printf("%d\t", array[i]);
            printf("\n");
        }
    
    
        mid = left + (right - left) / 2;

        if(array[mid] == value)
            {
            printf("found %d at %d", value,i);
            return(i);
        }
        if (array[mid] < value)
            {
            left = mid + 1;
            }
        if (array[mid] > value)
            {
            right = mid - 1;
            }
    }
    printf("value not found");
    return (-1);


}