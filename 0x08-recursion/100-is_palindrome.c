#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Recursive helper
 * @start: Pointer to the start of the current substring
 * @end: Pointer to the end of the current substring
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *start, char *end)
{
	if (start >= end)
		return (1); /* Palindrome */

	if (*start == *end)
		return (is_palindrome_recursive(start + 1, end - 1));

	return (0); /* Not a palindrome */
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_palindrome_recursive(s, s + strlen(s) - 1));
}
