#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - return dup string
 * @str: string to dup
 * Return: pointer to dup str
 */
char *_strdup(char *str)
{
char *p = str;
int i;
char *array;
int size = 0;

if (str == NULL)
{
return (NULL);
}
while (*p != '\0')
{
size++;
p++;
}
array = (char *)malloc((size *sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
array[i] = str[i];
}
return (array);
}
