#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The modified string
 */
char *leet(char *str)
{
	char *current = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	while (*current)
	{
		i = 0;
		j = 0;

		while (leet_chars[i])
		{
			if (*current == leet_chars[i])
			{
				*current = leet_replacements[j];
				break;
			}

			i++;
			j++;
		}

		current++;
	}

	return (str);
}

