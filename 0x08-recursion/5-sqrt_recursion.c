#include "main.h"
#include<stdio.h>
/**
 * _sqrt_recursion_helper - help in calcul
 * @n: argument
 * @start: compteur
 * Return: return the root
 */
int _sqrt_recursion_helper(int n, int start)
{
if (start == (n - 1))
{
return (-1);
}
else if (start * start == n)
{
return (start);
}
else
{
return (_sqrt_recursion_helper(n, start + 1));
}
}
/**
 * _sqrt_recursion - main fucntio
 * @n: argument
 * Return: return root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_recursion_helper(n, 0));
}
}
