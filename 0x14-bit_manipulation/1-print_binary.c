#include "main.h"
/**
 * print_binary - find binary of number
 * @n: arg
*/
void print_binary(unsigned long int n)
{
int size, i;
int l_zeros = 0;
unsigned long int mask;
size = 64;
if (n == 0)
{
printf("0");
}
for (i = size - 1 ; i >= 0 ; i--)
{
mask = 1UL << i;
if (n & mask)
{
printf("1");
l_zeros = 1;
}
else if (l_zeros)
{
printf("0");
}
}
}
