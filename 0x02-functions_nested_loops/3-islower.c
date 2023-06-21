#include "main.h"

/**
 * _islower - determine if a caractere is lower
 * @c: caractere ti check 
 * Return: 1 if c is lower case 0 otherwhise
 */
int _islower(char c)
{
	return (c <= 'z' && c >= 'a');
}
