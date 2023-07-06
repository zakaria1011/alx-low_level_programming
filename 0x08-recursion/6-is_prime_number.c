#include "main.h"
/**
 * is_prime_recursive - Recursive helper
 * @n: The number to check
 * @divisor: The current divisor being checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0); /* Not a prime number */

	if (divisor * divisor > n)
		return (1); /* Prime number */

	if (n % divisor == 0)
		return (0); /* Not a prime number */

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime recursively
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
