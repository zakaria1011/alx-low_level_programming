#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *p = s1, *q = s2;
int j;
int i;
char *array;
int size1 = 0;
int size2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*p != '\0')
{
size1++;
p++;
}
while (*q != '\0')
{
size2++;
q++;
}
array = (char *)malloc((size1 + size2 + 1) * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0 ; i < size1 ; i++)
{
array[i] = s1[i];
}
for (i = size1, j = 0 ; i < size1 + size2 && j < size2 ; i++, j++)
{
array[i] = s2[j];
}
return (array);
}
