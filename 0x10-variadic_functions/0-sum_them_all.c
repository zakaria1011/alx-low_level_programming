#include<stdarg.h>
#include<stdio.h>
/**
 * sum_them_all - some of n arguments
 * @n: number of arguments
 * Return: return total
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int value;
int total = 0;
if (n == 0)
return (0);
va_list args;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
value = va_arg(args, int);
total = total + value;
}
va_end(args);
return (total);
}
