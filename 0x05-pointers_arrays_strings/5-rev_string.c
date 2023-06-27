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

	int star;
	int end;
	char temp;

	star = 0;
	end = len - 1;
	while (star < end)
	{
		temp = s[end];
		s[end] = s[star];
		s[star] = temp;
		star++;
		end--;
	}
}
