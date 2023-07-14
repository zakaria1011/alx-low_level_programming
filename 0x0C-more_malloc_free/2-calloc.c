#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _calloc -  allocation set to zero
 * @nmemb: number of celul
 * @size: size of celul
 * Return: pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int totalsize = nmemb * size;
void *result;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
result = malloc(totalsize);
if (result == NULL)
{
return (NULL);
}
memset(result, 0, totalsize);
return (result);
}
