#include "main.h"

/**
 * _isalpha - check for variable is alphabet
 * @c: the caractere
 * Return: value 1 if alphabet 0 if no
 */
int _isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
