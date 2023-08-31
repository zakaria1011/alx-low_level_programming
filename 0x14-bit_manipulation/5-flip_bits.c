#include "main.h"
/**
 * flip_bits - counting num of bit
 * @n: first num
 * @m: seconde num
 * Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned int count = 0;

result = n ^ m;
while (result > 0)
{
result = result & (result - 1);
count++;
}
return (count);
}
