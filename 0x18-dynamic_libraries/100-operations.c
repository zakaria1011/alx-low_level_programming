#include <stdio.h>
int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
 * add - adding
 * @a: first num
 * @b: second num
 * Return: sum
*/
int add(int a, int b)
{
return (a + b);
}
/**
 * sub - subtracting
 * @a: first num
 * @b: second num
 * Return: diff
*/
int sub(int a, int b)
{
return (a - b);
}
/**
 * mul - multiplication
 * @a: first num
 * @b: second num
 * Return: product
*/
int mul(int a, int b)
{
return (a * b);
}
/**
 * div - division
 * @a: first num
 * @b: second num
 * Return: quotient
*/
int div(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}
/**
 * mod - modul
 * @a: first num
 * @b: second num
 * Return: rest
*/
int mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
