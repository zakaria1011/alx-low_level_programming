#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * string_nconcat - concat 2 string
 * @s1: first arg
 * @s2: second arg
 * @n: lenght
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char *result;
char empty = '\0';
if (s1 == NULL || s2 == NULL)
{
s1 = &empty;
s2 = &empty;
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n > len2)
{
n = len2;
}
result = (char *) malloc((len1 + n) *sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (i = 0 ; i < len1 ; i++)
{
result[i] = s1[i];
}
for (i = len1, j = 0 ; (i < (len1 + n)) &&(j < n) ; i++, j++)
{
result[i] = s2[j];
}
return (result);
}
