#include "main.h"
/**
 * is_prime_number_helper - helper function
 * @n: first arg
 * @start: compteur
 * Return: retun 1 or 0
 */
int is_prime_number_helper(int n, int start)
{
if (start == n)
{
return (1);
}
if (n % start == 0)
{
return (0);
}
else
{
return (is_prime_number_helper(n, start + 1));
}
}
/**
 * is_prime_number - main function
 * @n: arg
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
int i = 3;
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (0);
return (is_prime_number_helper(n, 2));
}
}
