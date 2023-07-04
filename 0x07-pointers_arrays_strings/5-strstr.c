#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return haystack;

		haystack++;
	}

	return (0);
}
