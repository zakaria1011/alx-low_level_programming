#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to be capitalized
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *current = str;

	while (*current)
	{
		if (*current == ' ' || *current == '\t' || *current == '\n' ||
		    *current == ',' || *current == ';' || *current == '.' ||
		    *current == '!' || *current == '?' || *current == '"' ||
		    *current == '(' || *current == ')' || *current == '{' ||
		    *current == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			if (*current >= 'a' && *current <= 'z')
				*current = *current - 'a' + 'A';

			capitalize_next = 0;
		}

		current++;
	}

	return (str);
}

