#include "main.h"
#include<stdio.h>
/**
 * is_prime_number - check is number is prime
 * @n: argument
 * @i: arg
 * Return: 1 or 0;
 */
int is_prime_number(int n, int i)
{
if (n <= 1)
{
return (0);
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_number(n, i + 1));
}
