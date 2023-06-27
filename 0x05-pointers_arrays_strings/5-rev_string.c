#include "main.h"
/**
 * rev_string - reversing stin
 *@s: argument
 *Return: nothing
 */
void rev_string(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	int start;
	int end;
	char temp;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;
		start++;
		end--;
	}
}
