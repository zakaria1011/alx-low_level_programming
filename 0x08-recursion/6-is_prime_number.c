#include "main.h"
#include<stdio.h>
/**
 * is_prime_number - check is number is prime
 * @n: argument
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
int i;
for (i = 2 ; i < n ; i++)
{
if (n % i == 0)
{
return (0);
break;
}
}
return (1);
}
