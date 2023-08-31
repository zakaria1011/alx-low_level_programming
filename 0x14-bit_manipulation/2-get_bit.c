#include "main.h"
/**
 * get_bit - get num of index
 * @n: arg
 * @index: index of bit
 * Return: 1 or 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
return ((n >> index) & 1);
}
