#include<stdio.h>

/**
 * _isupper - check if the caracter is upper
 * @c: the caractere
 * Return : 0 if not 1 if upper 
 */

int _isupper(char c)
{
    if (c <= 'Z'  &&  c >= 'A')
    {
        return 1;
    }
    else 
{
    return 0; 
}
}
