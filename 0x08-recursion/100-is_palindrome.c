#include "main.h"
#include<stdio.h>
/**
 * is_palindrome - check if a word is palyndrome
 * @s: arg
 * Return: 1 or 0;
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
char *p = s;
int len = 0;
int start;
int end;

while (*p != '\0')
{
len++;
p++;
}
end = len - 1;
start = 0;
while (start < end)
{
if (*(s + start)  == *(s + end))
{
start++;
end--;
}
else
{
return (0);
}
}
return (1);
}
