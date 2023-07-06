#include "main.h"
/**
 * _sqrt_recursion_helper - Recursive helper
 * @n: The number for which to find the square root
 * @start: The starting index for the search range
 * @end: The ending index for the search range
 * Return: The natural square root of the number, -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid); /* Natural square root found */
	else if (square > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
}
/**
 * _sqrt_recursion - Calculates the natural square root
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, -1 if no
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Invalid input, negative number */

	return (_sqrt_recursion_helper(n, 0, n));
}
