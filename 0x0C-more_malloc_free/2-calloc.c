#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _calloc -  allocation set to zero
 * @nmemb: number of celul
 * @size: size of celul
 * Return: pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *result;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
result = (void *)malloc(nmemb * size);
if (result == NULL)
{
return (NULL);
}
for (i = 0 ; i < nmemb ; i++)
{
result[i] = O;
}
return (result);
}
