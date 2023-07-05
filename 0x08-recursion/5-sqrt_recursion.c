//#include "main.h"
#include<stdio.h>
/**
 * _sqrt_recursion - calcul squar root
 * @n: argument
 * Return: sqrt root
 */
int _sqrt_recursion(int n)
{
unsigned int i = n;
if (n < 0)
{
return (-1);
}
while (i * i != n && i != 0)
{
i--;
}
if (i == 0)
{
return (-1);
}
else
{
return (i);
}
}
