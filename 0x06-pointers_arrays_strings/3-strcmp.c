#include "main.h"
/**
 * _strcmp - compaire two string
 * @s1: first arg
 * @s2: second arg
 * Return: negatif postif zero
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++
	}
	return (s1[i] - s2[i]);
}
