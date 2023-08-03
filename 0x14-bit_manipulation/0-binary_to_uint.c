#include "main.h"
/**
 * binary_to_unit - convert to binary
 * @b: pointer to  binary
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0, i = 0, numValue;

if (b ==  NULL)
return (0);
while (b != NULL)
{
if (b[0] != '1' && b[i] != '0')
return (0);
numValue = b[i] - 'O';
sum += numValue *pow(2, i);
}
return (sum);
}
